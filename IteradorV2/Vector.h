//
// Created by Diego on 4/26/2024.
//

#ifndef ITERADORV2_VECTOR_H
#define ITERADORV2_VECTOR_H
#include "VectorIterador.cpp"
#include "Iterable.h"
template<class T>
class Vector: Iterable<T>{

private:
    int size;
    int lenght;
    T **array;
public:
    Vector(int size);
    void insert(T *);
    void show();
    Iterador<T> * getIterador() override;

};



#endif //ITERADORV2_VECTOR_H
