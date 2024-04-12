cmake_minimum_required(VERSION 3.27)
project(sobrecarga)

set(CMAKE_CXX_STANDARD 17)

add_executable(sobrecarga main.cpp
        coleccionPersonas.cpp
        coleccionPersonas.h
        persona.cpp
        persona.h
        selector.cpp
        selector.h
        selectorLugar.cpp
        selectorLugar.h)
