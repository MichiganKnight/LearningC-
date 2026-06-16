cmake_minimum_required(VERSION 4.2)
project(LearningC__)

set(CMAKE_CXX_STANDARD 14)

add_executable(LearningC__ main.cpp
        functions/functions.cpp
        functions/functions.h
        simple_math/return_five.cpp
        simple_math/return_five.h
        simple_math/simple_math.cpp
        simple_math/simple_math.h)
