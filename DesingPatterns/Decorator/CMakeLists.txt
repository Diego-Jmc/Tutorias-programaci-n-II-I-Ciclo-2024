cmake_minimum_required(VERSION 3.27)
project(Decorator)

set(CMAKE_CXX_STANDARD 17)

add_executable(Decorator main.cpp
        Character.cpp
        Character.h
        Human.cpp
        Human.h
        SwordDecorator.cpp
        SwordDecorator.h
        RemoveSword.cpp
        RemoveSword.h)
