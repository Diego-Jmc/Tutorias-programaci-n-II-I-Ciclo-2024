cmake_minimum_required(VERSION 3.27)
project(ObjetoBase)

set(CMAKE_CXX_STANDARD 17)

add_executable(ObjetoBase main.cpp
        Persona.h
        Persona.cpp
        ObjetoBase.cpp
        Contenedor.cpp
        Vector.h
        Vector.cpp)
