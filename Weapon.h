//
// Created by dima on 08.04.2022.
//

#ifndef MYAPP_WEAPON_H
#define MYAPP_WEAPON_H


class Weapon
{
public:
    virtual void Aiming() = 0;
    virtual void Shooting() = 0;
    virtual ~Weapon(){}
};


#endif //MYAPP_WEAPON_H
