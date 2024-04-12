//
// Created by Diego on 3/15/2024.
//

#ifndef DECORATOR_HUMAN_H
#define DECORATOR_HUMAN_H
#include "Character.h"

class Human : public Character {



public:


    virtual int getDamage() override{
            return 10;
    }

    virtual int getDefense() override{
            return 5;
    }


    virtual void mostrar() override{
         cout << getDamage () << endl;
         cout << getDefense () << endl;
    };

};


#endif //DECORATOR_HUMAN_H
