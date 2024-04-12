//
// Created by Diego on 4/5/2024.
//

#include "Vector.h"

template<class T>
Vector<T>::Vector(int tam):tam(tam) {

    this->tam = tam;
    this->cant = 0;
    this->array = new T*[tam];

    for(int i=0;i<tam;i++){
        array[i] = nullptr;
    }

}

template<class T>
void Vector<T>::mostrar() {

    for(int i=0;i<cant;i++){
        cout << * (array[i]) << endl;
    }

}

template<class T>
void Vector<T>::insertar(T *dato) {

    if( tam > cant ){
        array[cant++] = dato;

    }else{
        cerr << "No hay espacio" << endl;
    }

}

template<class T>
T * Vector<T>::obtener(int i) {

    // hacer verificacion si i esta en los limites del arreglo
    return array[i];
}

