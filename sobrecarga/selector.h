//
// Created by Diego on 3/22/2024.
//

#ifndef SOBRECARGA_SELECTOR_H
#define SOBRECARGA_SELECTOR_H

#include <string>
#include "persona.h"

class selector {
public:
    selector(std::string);
    virtual ~selector();

    virtual bool seleccionar(const persona&) const = 0;
    virtual std::string obtenerDescripcion() const;
    virtual std::string toString() const = 0;

private:
    std::string _descripcion;
};

#endif //SOBRECARGA_SELECTOR_H
