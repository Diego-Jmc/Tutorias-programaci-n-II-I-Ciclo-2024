//
// Created by Diego on 3/22/2024.
//

#ifndef SOBRECARGA_COLECCIONPERSONAS_H
#define SOBRECARGA_COLECCIONPERSONAS_H

#define ELEMENTOS_POR_DEFECTO 20


#include "selector.h"
#include "persona.h"

class coleccionPersonas {
public:
    coleccionPersonas(int = ELEMENTOS_POR_DEFECTO);
    virtual ~coleccionPersonas();

    // Observe que el constructor de copia y la sobrecarga del
    // operador de asignación no se han declarado.
    // Puede declarar e implementar ambos métodos si lo considera
    // necesario para el ejercicio.
    // El programa debe ejecutarse correctamente. Si la aplicación
    // funciona sin implementar ambos métodos, no es necesario que
    // los implemente. No se rebajarán puntos por ello en este ejercicio.

    virtual void agregar(const persona&);
    virtual coleccionPersonas* seleccionar(const selector&);

    virtual string toString() const;

private:
    persona* _personas;
    int _n;
    int _k;
};

ostream& operator<<(ostream&, const coleccionPersonas&);


#endif //SOBRECARGA_COLECCIONPERSONAS_H
