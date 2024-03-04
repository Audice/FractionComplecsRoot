cmake_minimum_required(VERSION 3.2)

project(start_classes LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(main main.cpp Fraction.cpp Complex.cpp)
