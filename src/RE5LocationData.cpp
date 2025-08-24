#include "RE5LocationData.h"
#include <cstdio>
#include "zlib.h"

namespace RE5MemTools::LocationData {
    int DecompressJSONFromFile(std::string filePath, std::string& out) {
        // Open file
        FILE* apre5File = fopen(filePath.c_str(), "rb");
        if (apre5File == nullptr)
            return LOC_DATA_NOT_OPENED;

        // Get full length of file
        fseek(apre5File, 0, SEEK_END);
        unsigned long fileLength = ftell(apre5File);
        rewind(apre5File);

        // Get size of uncompressed package from header (4 bytes)
        Bytef compressedData[fileLength - 4];
        unsigned long packageSize = 0;
        fread(&packageSize, 4, 1, apre5File);

        // Read the rest of the file
        fseek(apre5File, 4, SEEK_SET);
        fread(compressedData, fileLength - 4, 1, apre5File);
        fclose(apre5File);
        apre5File = nullptr;

        // Decompress package
        char decompressedData[packageSize];
        int result = uncompress(reinterpret_cast<Bytef*>(decompressedData), &packageSize, compressedData, fileLength - 4);

        if (result != Z_OK)
            return LOC_DATA_ZLIB_FAILED;

        out = std::string(decompressedData, packageSize);
        return LOC_DATA_OK;
    }

    int GetLocationData(std::string fileName) {
        return 0;
    }
}