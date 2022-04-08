//
// Created by dima on 08.04.2022.
//

#ifndef MYAPP_KNIFE_H
#define MYAPP_KNIFE_H

#include "Weapon.h"

class Knife : public Weapon
{
public:
    virtual void Aiming() override;
    virtual void Shooting() override;
    ~Knife();

private:
};


#endif //MYAPP_KNIFE_H
