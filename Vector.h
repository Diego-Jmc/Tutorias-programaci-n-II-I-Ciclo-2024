//
// Created by Diego on 4/5/2024.
//

#ifndef TUTORIAS_PROGRAMACI_N_II_I_CICLO_2024_VECTOR_H
#define TUTORIAS_PROGRAMACI_N_II_I_CICLO_2024_VECTOR_H
#include <iostream>
using namespace std;

template<class T>
class Vector {

private:
    int tam;
    int cant;
    T **array;
public:
    Vector(int);
    void mostrar();
    void insertar(T *dato);
    T *obtener(int i);

};




#endif //TUTORIAS_PROGRAMACI_N_II_I_CICLO_2024_VECTOR_H
