#include <catch2/catch_test_macros.hpp>

#include "RE5LocationData.h"

using namespace RE5MemTools;

TEST_CASE("Can get decompressed JSON") {
    std::string filePath = "..//output.apre5";
    std::string jsonData;
    int result = LocationData::DecompressJSONFromFile(filePath, jsonData);
    REQUIRE(result == LOC_DATA_OK);
    printf("JSON data read:\n\n%s\n", jsonData.c_str());

    auto locations = LocationData::GetLocationData(jsonData);
    REQUIRE(locations.size() == 10);

    for (auto location : locations) {
        printf("Location: %i - %i (%i)\n", location.id, location.item, location.qty);
    }
}