//
// Created by Diego on 5/3/2024.
//

#ifndef OBJETOBASE_VECTOR_H
#define OBJETOBASE_VECTOR_H
#include "Contenedor.h"
#include <sstream>

class Vector : public Contenedor {

private:
    ObjetoBase **array;
    int cant;
    int tam;
public:
     Vector(int);
     void agregar(ObjetoBase *) override;
     string toString() override;
};


#endif //OBJETOBASE_VECTOR_H
