cmake_minimum_required(VERSION 3.31)
project(RE5MemTools VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 23)

add_library(RE5MemTools STATIC
    src/Items.cpp
    src/Text.cpp
)
target_include_directories(RE5MemTools PRIVATE include)

Include(FetchContent)

FetchContent_Declare(
    Catch2
    GIT_REPOSITORY  https://github.com/catchorg/Catch2.git
    GIT_TAG         v3.8.0
)

FetchContent_MakeAvailable(Catch2)

add_executable(tests 
    tests/test_Items.cpp
    tests/test_Text.cpp
)
target_include_directories(tests PRIVATE include)

target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
target_link_libraries(tests PRIVATE RE5MemTools)

include(CTest)
include(Catch)
catch_discover_tests(tests)