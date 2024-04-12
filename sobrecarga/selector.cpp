//
// Created by Diego on 3/22/2024.
//

#include "selector.h"

selector::selector(string descripcion) : _descripcion(descripcion) {
}

selector::~selector() {
}

std::string selector::obtenerDescripcion() const {
    return _descripcion;
}