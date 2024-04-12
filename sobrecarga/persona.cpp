//
// Created by Diego on 3/22/2024.
//


#include "persona.h"


persona::persona(string nombre, int edad, double peso, double estatura, string lugar)
        : _nombre(nombre), _edad(edad), _peso(peso), _estatura(estatura), _lugar(lugar) {
}

persona::~persona() {
}

string persona::obtenerNombre() const {
    return _nombre;
}

int persona::obtenerEdad() const {
    return _edad;
}

double persona::obtenerPeso() const {
    return _peso;
}

double persona::obtenerEstatura() const {
    return _estatura;
}

string persona::obtenerLugar() const {
    return _lugar;
}

string persona::toString() const {
    std::stringstream r;
    r << "{";
    r << "nombre: " << _nombre << ", ";
    r << "edad: " << _edad << ", ";
    r << "peso: " << _peso << ", ";
    r << "estatura: " << _estatura << ", ";
    r << "lugar: " << _lugar;
    r << "}";
    return r.str();
}
