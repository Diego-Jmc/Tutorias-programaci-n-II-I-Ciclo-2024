//
// Created by Diego on 3/22/2024.
//

#include "coleccionPersonas.h"

coleccionPersonas::coleccionPersonas(int n)
        : _n(n), _k(0), _personas(new persona[n]) {
}

coleccionPersonas::~coleccionPersonas() {
    delete[] _personas;
}

string coleccionPersonas::toString() const {
    std::stringstream r;
    r << "[";
    for (int i = 0; i < _k; i++) {
        r << "\n\t" << _personas[i].toString();
        if (i < (_k - 1)) {
            r << ", ";
        }
    }
    r << "\n]";
    return r.str();
}

coleccionPersonas* coleccionPersonas::seleccionar(const selector &s) {

    coleccionPersonas* r = new coleccionPersonas();

    for (int i = 0; i < _k; i++) {
        if (s.seleccionar(_personas[i])) {
            r->agregar(_personas[i]);
        }
    }

    return r;
}

void coleccionPersonas::agregar(const persona& p) {
    if (_k < _n) {
        _personas[_k++] = p;
    }
}
