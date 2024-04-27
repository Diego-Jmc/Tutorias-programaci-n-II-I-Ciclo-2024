//
// Created by Diego on 4/26/2024.
//

#ifndef ITERADORV2_ITERADOR_H
#define ITERADORV2_ITERADOR_H
#include <iostream>
using namespace std;

template<class T>
class Iterador {

public:
    virtual bool hasMore() = 0;
    virtual T * getNext() = 0;
};


#endif //ITERADORV2_ITERADOR_H
