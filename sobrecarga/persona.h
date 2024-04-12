//
// Created by Diego on 3/22/2024.
//

#ifndef SOBRECARGA_PERSONA_H
#define SOBRECARGA_PERSONA_H


#include <iostream>
#include <sstream>
using std::string;
using std::ostream;

class persona {
public:
    persona(string = "(sin definir)", int = 0, double = 0.0, double = 0.0, string = "(sin definir)");
    virtual ~persona();

    virtual string obtenerNombre() const;
    virtual int obtenerEdad() const;
    virtual double obtenerPeso() const;
    virtual double obtenerEstatura() const;
    virtual string obtenerLugar() const;

    virtual string toString() const;

private:
    string _nombre;
    int _edad;
    double _peso;
    double _estatura;
    string _lugar;
};

ostream& operator<<(ostream&, const persona&);


#endif //SOBRECARGA_PERSONA_H
