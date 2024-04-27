//
// Created by Diego on 4/26/2024.
//

#include "VectorIterador.h"

template<class T>
VectorIterador<T>::VectorIterador(int size,T ** _array) {
    this->last_position = size;
    current_position = -1;
    this->array = _array;
}


template<class T>
bool VectorIterador<T>::hasMore()  {
    return current_position != last_position;
}


template<class T>
T *VectorIterador<T>::getNext() {
    current_position++;
    return array[current_position];
}