#include "RE5LocationData.h"
#include <cstdio>
#include "zlib.h"

#include <nlohmann/json.hpp>
using json = nlohmann::json;

namespace RE5MemTools::LocationData {
    int DecompressJSONFromFile(std::string filePath, std::string& out, APRE5Header& header) {
        // Open file
        FILE* apre5File = fopen(filePath.c_str(), "rb");
        if (apre5File == nullptr)
            return LOC_DATA_NOT_OPENED;

        // Get full length of file
        fseek(apre5File, 0, SEEK_END);
        unsigned long fileLength = ftell(apre5File);
        rewind(apre5File);

        // Get size of uncompressed package from header (4 bytes)
        fread(&header, sizeof(APRE5Header), 1, apre5File);

        // Allocate buffer for data and read the rest of the file
        char* readData = new char[fileLength - sizeof(APRE5Header)];
        fseek(apre5File, sizeof(APRE5Header), SEEK_SET);
        fread(readData, fileLength - sizeof(APRE5Header), 1, apre5File);
        fclose(apre5File);
        apre5File = nullptr;

        // Decompress package if necessary
        if (header.compressed) {
            char* decompressedData = new char[header.unpackedSize];
            int result = uncompress(reinterpret_cast<Bytef*>(decompressedData), reinterpret_cast<unsigned long*>(&header.unpackedSize), reinterpret_cast<Bytef*>(readData), fileLength - sizeof(APRE5Header));

            if (result != Z_OK)
                return LOC_DATA_ZLIB_FAILED;

            out = std::string(decompressedData, header.unpackedSize);
            delete[] decompressedData;
        }
        else {
            out = std::string(readData, header.unpackedSize);
        }

        delete[] readData;
        return LOC_DATA_OK;
    }

    std::vector<Location> GetLocationData(std::string jsonString) {
        auto locationData = json::parse(jsonString);
        std::vector<Location> locations;

        for (int i = 0; i < locationData.size(); i++) {
            Location newLocation;
            newLocation.id = locationData[i]["Location"];
            newLocation.item = locationData[i]["Item"];
            newLocation.qty = locationData[i]["Qty"];
            locations.push_back(newLocation);
        }

        return locations;
    }
}