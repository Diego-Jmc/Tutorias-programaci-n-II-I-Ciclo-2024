//
// Created by Diego on 3/15/2024.
//

#ifndef DECORATOR_CHARACTER_H
#define DECORATOR_CHARACTER_H
#include <iostream>
using namespace std;

class Character {


private:
    string nombre;
    float damage;
public:

    virtual int getDamage() = 0;
    virtual int getDefense() = 0;
    virtual void mostrar() = 0;

    string getNombre(){
        return nombre;
    }

    void setNombre(string nom){
        this->nombre = nom;
    }

    void setDamage(int _dam){
        this->damage = _dam;
    }
};


#endif //DECORATOR_CHARACTER_H
