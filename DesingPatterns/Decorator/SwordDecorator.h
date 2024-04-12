//
// Created by Diego on 3/15/2024.
//

#ifndef DECORATOR_SWORDDECORATOR_H
#define DECORATOR_SWORDDECORATOR_H
#include "Character.h"

class SwordDecorator : public Character {

private:
    static Character *character;
public:

    SwordDecorator(Character * _character){
        this->character = _character;
    }

    static Character * removeSword(Character *_character){
        _character->setDamage(_character->getDamage() - 20);
        return _character;
    }

    virtual int getDamage() override{
        return character->getDamage() + 20;
    }

    virtual int getDefense() override{
        return character->getDefense();
    }


    virtual void mostrar() override{
        cout << getDamage() << endl;
        cout << getDefense() << endl;
    }
};


#endif //DECORATOR_SWORDDECORATOR_H
