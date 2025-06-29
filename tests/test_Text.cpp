#include <catch2/catch_test_macros.hpp>

#include "RE5Text.h"

using namespace RE5MemTools::Text;

TEST_CASE("Test EncryptString") {
    int testEncrypted[5] = { 0x5E, 0x74, 0x90, 0x92, 0x9C };
    int* newEncrypted = EncryptString("Testy");

    for (int i = 0; i < 5; i++) {
        REQUIRE(testEncrypted[i] == newEncrypted[i]);
    }

    free(newEncrypted);
}

TEST_CASE("Test DecryptString") {
    int* encrypted = EncryptString("Testy westy");
    std::string decrypted = DecryptString(encrypted);

    REQUIRE(decrypted == "Testy westy");

    free(encrypted);
}