cmake_minimum_required(VERSION 3.13)
project(lib)

set(CMAKE_CXX_STANDARD 17)

add_executable(lib
        headers/reader.h   headers/writer.h   headers/encoder.h   headers/huffman.h   headers/decoder.h
        sources/reader.cpp sources/writer.cpp sources/encoder.cpp sources/huffman.cpp sources/decoder.cpp
        tests/gtest/gtest-all.cc
        tests/gtest/gtest.h
        tests/gtest/gtest_main.cc
        tests/testing.cpp)