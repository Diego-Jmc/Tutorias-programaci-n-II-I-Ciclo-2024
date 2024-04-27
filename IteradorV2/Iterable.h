//
// Created by Diego on 4/26/2024.
//

#ifndef ITERADORV2_ITERABLE_H
#define ITERADORV2_ITERABLE_H
#include <iostream>
#include "Iterador.h"
using namespace std;

template<class  T>
class Iterable {

public:
    virtual Iterador<T> * getIterador() = 0;
};


#endif //ITERADORV2_ITERABLE_H
