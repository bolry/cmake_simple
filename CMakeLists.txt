cmake_minimum_required(VERSION 3.9)

if (UNIX AND NOT APPLE)
    execute_process(COMMAND ${CMAKE_C_COMPILER} -fuse-ld=gold -Wl,--version ERROR_QUIET OUTPUT_VARIABLE ld_version)
    if ("${ld_version}" MATCHES "GNU gold")
        set(CMAKE_EXE_LINKER_FLAGS    "${CMAKE_EXE_LINKER_FLAGS}    -fuse-ld=gold -Wl,--disable-new-dtags")
        set(CMAKE_STATIC_LINKER_FLAGS "${CMAKE_STATIC_LINKER_FLAGS} -fuse-ld=gold -Wl,--disable-new-dtags")
        set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -fuse-ld=gold -Wl,--disable-new-dtags")
        set(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} -fuse-ld=gold -Wl,--disable-new-dtags")
    endif ()
endif ()

if(CMAKE_COMPILER_IS_GNUCC)
       set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")
endif(CMAKE_COMPILER_IS_GNUCC)

if(CMAKE_COMPILER_IS_GNUCXX)
       set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++98")
endif(CMAKE_COMPILER_IS_GNUCXX)

project(Frogzy CXX C)

#set(THREADS_PREFER_PTHREAD_FLAG ON)
#find_package(Threads REQUIRED)

find_package(FLTK REQUIRED)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src/App)
add_subdirectory(src/fOo)
add_subdirectory(src/bAr)
add_subdirectory(t)

enable_testing()
add_test(FirstTest t/Frozen --gtest_color=no)

set(SOURCE_FILES main.cpp Simple_window.h GUI.cpp GUI.h Window.cpp Window.h fltk.h std_lib_facilities.h Point.h Graph.cpp Graph.h)
add_executable(chap123first ${SOURCE_FILES})
target_include_directories(chap123first PRIVATE ${FLTK_INCLUDE_DIR})
#target_link_libraries(chap123first Threads::Threads)
target_link_libraries(chap123first ${FLTK_LIBRARY} m X11 Xext Xfixes Xrender dl jpeg)
