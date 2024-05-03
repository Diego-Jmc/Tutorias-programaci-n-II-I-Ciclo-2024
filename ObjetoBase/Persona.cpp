//
// Created by Diego on 5/3/2024.
//


#include "Persona.h"

Persona::Persona(const string &nombre, int edad) : nombre(nombre), edad(edad) {}

Persona::~Persona() {

}

const string &Persona::getNombre() const {
    return nombre;
}

void Persona::setNombre(const string &nombre) {
    Persona::nombre = nombre;
}

int Persona::getEdad() const {
    return edad;
}

void Persona::setEdad(int edad) {
    Persona::edad = edad;
}

string Persona::toString() {
   stringstream s;

   s << "Nombre: " << nombre << endl;
   s<< "Edad: " << edad << endl;

   return s.str();
}


