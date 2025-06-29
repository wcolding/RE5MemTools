#pragma once

#include <string>

namespace RE5MemTools {
    namespace Text {
        /**
         * @brief Fetches a string of the specified length from an encrypted string object
         *
         * @param  encrypted: pointer to the encrypted string, stored as an integer array
         * @param  length: how many characters to decrypt from the array
         *
         * @return std::string
         */
        std::string DecryptString(int* encrypted, size_t length);
        
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