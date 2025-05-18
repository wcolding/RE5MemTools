#include <catch2/catch_test_macros.hpp>

#include "Items.h"

using namespace RE5MemTools;

TEST_CASE("Check class sizes") {
    if (sizeof(void*) == 4) {
        REQUIRE(sizeof(mItemSet) == 0x11C);
        REQUIRE(sizeof(mpInfo) == 0x18C);
    } else {
        REQUIRE(sizeof(mItemSet) == 0x124);
        REQUIRE(sizeof(mpInfo) == 0x1A0);
    }
}

TEST_CASE("Test GetAPLocationId") {
    mItemSet itemSet;
    int buffer[12] = {
        0, 0, 0, 0,
        0, 0, 0, 12345,
        0, 0, 0, 0
    };

    memcpy(&itemSet, &buffer, 0x30);

    REQUIRE(Item::GetAPLocationId(&itemSet) == 12345);
}