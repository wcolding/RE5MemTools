#include <catch2/catch_test_macros.hpp>

#include "RE5LocationData.h"

using namespace RE5MemTools;

TEST_CASE("Can get location data from file") {
    std::string filePath = "..//output.apre5";
    std::string jsonData;
    LocationData::APRE5Header header;
    int result = LocationData::DecompressJSONFromFile(filePath, jsonData, header);

    SECTION("Can read data") {
        REQUIRE(result == LOC_DATA_OK);
        printf("JSON data read:\n%s\n\n", jsonData.c_str());
    }

    SECTION("Can read header data") {
        REQUIRE(header.unpackedSize == 141);
        REQUIRE(header.compressed == 0);
        printf("File type: %s\n", header.fileType);
        printf("Data size: %i\n", header.unpackedSize);
        printf("Compressed: %s\n", header.compressed ? "True" : "False");
        printf("Seed: %s\n", header.seedName);
        printf("Player: %s\n\n", header.slotName);
    }

    SECTION("Can get location data as vector") {
        auto locations = LocationData::GetLocationData(jsonData);
        REQUIRE(locations.size() == 3);

        for (auto location : locations) {
            printf("Location: %i - %i (%i)\n", location.id, location.item, location.qty);
        }
    }
}