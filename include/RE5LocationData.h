#pragma once

#include <string>
#include <vector>

#define LOC_DATA_OK 0
#define LOC_DATA_NOT_OPENED 1
#define LOC_DATA_ZLIB_FAILED 2


namespace RE5MemTools {
    namespace LocationData {

        struct Location {
            int id;
            int item;
            int qty;
        };

        /**
         * @brief Reads a .apre5 file and decompresses the location data
         *
         * @param  filePath Path to the .apre5 file
         * @param  out String where location data is stored in JSON format
         *
         * @return int
         */
        int DecompressJSONFromFile(std::string filePath, std::string& out);

        /**
         * @brief Converts JSON-formatted location data to a std::vector of Location objects
         *
         * @param  jsonString String containing JSON data
         *
         * @return std::vector<RE5MemTools::LocationData::Location>
         */
        std::vector<Location> GetLocationData(std::string jsonString);
    }
}