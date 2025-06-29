#include "RE5Text.h"

#include <cstdlib>

std::string charMap = "0123456789!?() &:;,.\"\'~-+/@$ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz[]¡¿®";

namespace RE5MemTools::Text {
    int* EncryptString(std::string unencrypted) {
        int* encrypted = static_cast<int*>(malloc((unencrypted.size()+1) * 4));
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

        encrypted[unencrypted.size()] = RE5_STRING_END;

        return encrypted;
    }

    std::string DecryptString(int* encrypted) {
        std::string decrypted;
        int index = 0;
        for (int i = 0; i < RE5_MAX_STRING_LENGTH; i++) {
            if (encrypted[i] == RE5_STRING_END)
                break;
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