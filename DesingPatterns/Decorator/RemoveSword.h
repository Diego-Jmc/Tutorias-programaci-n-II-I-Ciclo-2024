//
// Created by Diego on 3/22/2024.
//

#ifndef DECORATOR_REMOVESWORD_H
#define DECORATOR_REMOVESWORD_H
#include "Character.h"

class RemoveSword : public Character{

private:
    Character *character;

public:
    RemoveSword(Character * _character){
        this->character = _character;
    }

    virtual int getDamage() override{
        return character->getDamage() -20;
    }

    virtual int getDefense() override{
        return character->getDefense();
    }


    virtual void mostrar() override{
        cout << getDamage() << endl;
        cout << getDefense() << endl;
    }
};


#endif //DECORATOR_REMOVESWORD_H
