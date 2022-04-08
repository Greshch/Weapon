//
// Created by dima on 08.04.2022.
//

#ifndef MYAPP_HANDGRENADE_H
#define MYAPP_HANDGRENADE_H


#include "Weapon.h"

class HandGrenade : public Weapon
{
public:
    virtual void Aiming();
    virtual void Shooting();
};


#endif //MYAPP_HANDGRENADE_H
