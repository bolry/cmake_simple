cmake_minimum_required(VERSION 2.8)
project(Frosty C CXX)

add_subdirectory(/home/bo/Repositories/OpenSource/googlemock-read-only gmooock)

add_executable(Frozen basic.cpp using_matcher.cpp)
target_link_libraries(Frozen Fresh Barry gmock_main)
target_include_directories(Frozen PUBLIC
        ${gtest_SOURCE_DIR}/include
        ${gmock_SOURCE_DIR}/include)
