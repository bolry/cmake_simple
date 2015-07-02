project(Barnie)
add_library(Barry barcode.cpp barcode2.cpp)
target_include_directories(Barry PUBLIC "$<BUILD_INTERFACE:${Barnie_SOURCE_DIR}>")
