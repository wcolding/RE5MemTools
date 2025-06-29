#include "Text.h"

#include <cstdlib>

std::string charMap = "0123456789!?() &:;,.\"\'~-+/@$ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz[]¡¿®";

namespace RE5MemTools::Text {
    int* EncryptString(std::string unencrypted) {
        int* encrypted = static_cast<int*>(malloc(unencrypted.size() * 4));
        int index = 0;
        for (int i = 0; i < unencrypted.size(); i++) {
            index = charMap.find(unencrypted[i]);
            if (index != std::string::npos) {
                encrypted[i] = index * 2;
            }
            else {
                encrypted[i] = 0x20; // blank space for unknown characters
            }
        }

        return encrypted;
    }

    std::string DecryptString(int* encrypted, size_t length) {
        std::string decrypted;
        int index = 0;
        for (int i = 0; i < length; i++) {
            index = encrypted[i] / 2;
            if (index < charMap.length()) {
                decrypted += charMap[index];
            }
            else {
                decrypted += " ";
            }
        }

        return decrypted;
    }
}