//
// Created by Diego on 3/22/2024.
//

#ifndef SOBRECARGA_SELECTORLUGAR_H
#define SOBRECARGA_SELECTORLUGAR_H
#include "selector.h"

class selectorLugar :public selector{

private:
    string lugar;
public:

    selectorLugar(std::string _descripcion , std::string _lugar): selector(_descripcion){
        this->lugar = _lugar;
    }

    virtual bool seleccionar(const persona& p)const override{
        return p.obtenerLugar() == this->lugar;
    }


    virtual std::string toString() const override{
        return "";
    }

};


#endif //SOBRECARGA_SELECTORLUGAR_H
