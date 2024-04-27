//
// Created by Diego on 4/26/2024.
//

#include "Vector.h"

template<class T>
Vector<T>::Vector(int size) {
    this->size = size;
    this->lenght = 0;

    array = new T * [size];

    for (int i = 0; i < size; ++i) {
        array[i] = nullptr;
    }
}

template<class T>
void Vector<T>::insert(T * data) {

    if(size > lenght){
        array[lenght++] = data;
    }else{
        cout << "No space";
    }
}



template<class T>
void Vector<T>::show() {
    for (int i = 0; i < lenght; ++i) {
        cout << * (array[i]) << endl;
    }
}

template<class T>
Iterador<T> *Vector<T>::getIterador() {
    return new VectorIterador(size-1,array);
}

