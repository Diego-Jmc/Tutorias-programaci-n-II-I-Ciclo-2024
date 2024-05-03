//
// Created by Diego on 5/3/2024.
//

#ifndef OBJETOBASE_CONTENEDOR_H
#define OBJETOBASE_CONTENEDOR_H
#include "ObjetoBase.h"

class Contenedor : public ObjetoBase{

public:
    Contenedor(){}
    ~Contenedor(){};
    virtual void agregar(ObjetoBase *) = 0;
    virtual string toString() = 0;

};


#endif //OBJETOBASE_CONTENEDOR_H
