cmake_minimum_required(VERSION 3.13)
project(huffman)
include_directories(${PROJECT_SOURCE_DIR})

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fsanitize=address,undefined -D_GLIBCXX_DEBUG")

add_executable(Huffman_Test tests/testing.cpp)
add_executable(Huffman_Tool utility/tool.cpp)

add_library(Huffman_Library
        utility/headers/reader.h   utility/headers/writer.h   lib/headers/encoder.h   lib/headers/huffman.h   lib/headers/decoder.h
        utility/sources/reader.cpp utility/sources/writer.cpp lib/sources/encoder.cpp lib/sources/huffman.cpp lib/sources/decoder.cpp

        tests/gtest/gtest-all.cc
        tests/gtest/gtest.h
        tests/gtest/gtest_main.cc)

target_link_libraries(Huffman_Test Huffman_Library)
target_link_libraries(Huffman_Tool Huffman_Library)
target_link_libraries(Huffman_Library -lpthread)