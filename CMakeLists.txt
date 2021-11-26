cmake_minimum_required(VERSION 3.20)
project(cpp02)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp02 ex00/main.cpp ex00/Fixed.cpp ex00/Fixed.hpp ex01/Fixed.cpp ex01/Fixed.hpp ex01/main.cpp)
