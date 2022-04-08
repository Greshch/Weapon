//
// Created by dima on 08.04.2022.
//

#ifndef MYAPP_BAZOOKA_H
#define MYAPP_BAZOOKA_H


#include "Weapon.h"

class Bazooka : public Weapon
{
public:
    virtual void Aiming();
    virtual void Shooting();
};


#endif //MYAPP_BAZOOKA_H
