cmake_minimum_required(VERSION 3.31)
project(RE5MemTools VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 23)

Include(FetchContent)

FetchContent_Declare(
    Catch2
    GIT_REPOSITORY  https://github.com/catchorg/Catch2.git
    GIT_TAG         v3.8.0
)

FetchContent_Declare(
    zlib
    GIT_REPOSITORY  https://github.com/madler/zlib.git
    GIT_TAG         v1.3.1
)

FetchContent_Declare(
    json
    GIT_REPOSITORY  https://github.com/nlohmann/json.git
    GIT_TAG         v3.12.0
)

FetchContent_MakeAvailable(Catch2 zlib json)


add_library(RE5MemTools STATIC
    "src/RE5Items.cpp"
    "src/RE5Text.cpp"
    "src/RE5LocationData.cpp"
)
target_include_directories(RE5MemTools PRIVATE include)
target_link_libraries(RE5MemTools PRIVATE zlibstatic)
target_link_libraries(RE5MemTools PRIVATE nlohmann_json::nlohmann_json)

add_executable(tests 
    tests/test_Items.cpp
    tests/test_Text.cpp
    tests/test_LocationData.cpp
)
target_include_directories(tests PRIVATE include)

target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
target_link_libraries(tests PRIVATE RE5MemTools)

include(CTest)
include(Catch)
catch_discover_tests(tests)