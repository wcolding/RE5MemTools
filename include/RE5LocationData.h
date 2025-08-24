#pragma once

#include <string>

#define LOC_DATA_OK 0
#define LOC_DATA_NOT_OPENED 1
#define LOC_DATA_ZLIB_FAILED 2


namespace RE5MemTools {
    namespace LocationData {

        /**
         * @brief Reads a .apre5 file and decompresses the location data
         *
         * @param  filePath Path to the .apre5 file
         * @param  out string where location data is stored in JSON format
         *
         * @return int
         */
        int DecompressJSONFromFile(std::string filePath, std::string& out);
    }
}