//
// Created by dima on 08.04.2022.
//

#ifndef MYAPP_GUN_H
#define MYAPP_GUN_H


#include "Weapon.h"

class Gun : public Weapon
{
public:
    virtual void Aiming() override;
    virtual void Shooting() override;
};


#endif //MYAPP_GUN_H
