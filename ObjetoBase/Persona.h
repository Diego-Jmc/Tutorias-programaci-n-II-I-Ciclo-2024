//
// Created by Diego on 5/3/2024.
//

#ifndef OBJETOBASE_PERSONA_H
#define OBJETOBASE_PERSONA_H
#include "ObjetoBase.h"
#include <sstream>

class Persona : public  ObjetoBase{
public:
    Persona(const string &nombre, int edad);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    int getEdad() const;

    void setEdad(int edad);

    virtual ~Persona();

    string toString() override;

private:
    string nombre;
    int edad;



};


#endif //OBJETOBASE_PERSONA_H
