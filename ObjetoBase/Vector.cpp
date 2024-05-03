//
// Created by Diego on 5/3/2024.
//

#include "Vector.h"


Vector::Vector(int _tam) {
    tam = _tam;
    cant = 0;
    array = new ObjetoBase * [_tam];
    for (int i = 0; i < _tam; ++i) {
        array[i] = nullptr;
    }
}

void Vector::agregar(ObjetoBase *o) {

    if(tam > cant){
        array[cant++] = o;
    }

}

string Vector::toString() {
    stringstream s;

    for (int i = 0; i < cant; ++i) {
        s << array[i]->toString() << endl;
    }

    return s.str();
}