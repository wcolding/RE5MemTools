#pragma once

#include <string>

#define RE5_MAX_STRING_LENGTH 32

namespace RE5MemTools {
    namespace Text {

        /**
         * @brief Denotes the end of an encrypted string
         */
        const int StrEnd = 0x04010000;

        /**
         * @brief Fetches a string of the specified length from an encrypted string object
         *
         * @param  encrypted: pointer to the encrypted string, stored as an integer array
         *
         * @return std::string
         */
        std::string DecryptString(int* encrypted);
        
        /**
         * @brief Creates an encrypted string as an integer array on the heap
         * 
         * Note that you should use free() when you are finished using the array
         *
         * @param  unencrypted: the string to encrypt
         *
         * @return int*
         */
        int* EncryptString(std::string unencrypted);
    }
}