#include <catch2/catch_test_macros.hpp>

#include "RE5LocationData.h"

TEST_CASE("Can get decompressed JSON") {
    std::string filePath = "..//output.apre5";
    std::string jsonData;
    int result = RE5MemTools::LocationData::DecompressJSONFromFile(filePath, jsonData);
    REQUIRE(result == LOC_DATA_OK);
    printf("JSON data read:\n\n%s\n", jsonData.c_str());
}