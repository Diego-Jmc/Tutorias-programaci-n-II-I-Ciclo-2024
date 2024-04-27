//
// Created by Diego on 4/26/2024.
//

#ifndef ITERADORV2_VECTORITERADOR_H
#define ITERADORV2_VECTORITERADOR_H
#include "Iterador.h"

template<class T>
class VectorIterador : public Iterador<T>{

private:
    int last_position; // corresponde al last_position del arreglo al que vamos a iterar
    int current_position;
    T ** array;
public:
    VectorIterador(int size,T ** array);
    bool hasMore() override;
    T * getNext() override;
};

#endif //ITERADORV2_VECTORITERADOR_H
