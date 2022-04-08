//
// Created by dima on 08.04.2022.
//

#ifndef MYAPP_SHOTGUN_H
#define MYAPP_SHOTGUN_H


#include "Weapon.h"

class ShotGun : public Weapon
{
public:
    virtual void Aiming();
    virtual void Shooting();
};


#endif //MYAPP_SHOTGUN_H
