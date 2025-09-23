cmake_minimum_required(VERSION 4.0)
project(library)

set(CMAKE_CXX_STANDARD 14)

add_executable(library
        book.cpp
        main.cpp)
