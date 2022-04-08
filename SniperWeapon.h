//
// Created by dima on 08.04.2022.
//

#ifndef MYAPP_SNIPERWEAPON_H
#define MYAPP_SNIPERWEAPON_H


#include "Weapon.h"

class SniperWeapon : public Weapon
{
public:
    virtual void Aiming() override;
    virtual void Shooting() override;
};


#endif //MYAPP_SNIPERWEAPON_H
