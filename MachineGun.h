//
// Created by dima on 08.04.2022.
//

#ifndef MYAPP_MACHINEGUN_H
#define MYAPP_MACHINEGUN_H


#include "Weapon.h"

class MachineGun : public Weapon
{
public:
    virtual void Aiming() override;
    virtual void Shooting() override;
};


#endif //MYAPP_MACHINEGUN_H
