project(Fool)
add_library(Fresh foolish.cpp foolish2.cpp soundex.cpp)
target_include_directories(Fresh PUBLIC "$<BUILD_INTERFACE:${Fool_SOURCE_DIR}>")
