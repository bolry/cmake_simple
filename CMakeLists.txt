cmake_minimum_required(VERSION 2.8)
project(Frogzy C CXX)

if(CMAKE_COMPILER_IS_GNUCC)
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")
endif(CMAKE_COMPILER_IS_GNUCC)

if(CMAKE_COMPILER_IS_GNUCXX)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++98")
endif(CMAKE_COMPILER_IS_GNUCXX)

add_subdirectory(src/App)
add_subdirectory(src/fOo)
add_subdirectory(src/bAr)
add_subdirectory(t)

enable_testing()
add_test(FirstTest t/Frozen --gtest_color=no)
