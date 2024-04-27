cmake_minimum_required(VERSION 3.27)
project(IteradorV2)

set(CMAKE_CXX_STANDARD 17)

add_executable(IteradorV2 main.cpp
        Iterable.h
        Iterador.h
        Vector.cpp
        Vector.h
        VectorIterador.cpp
        VectorIterador.h)
