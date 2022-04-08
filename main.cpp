#include <iostream>
#include "Weapon.h"
#include "Bazooka.h"
#include "Gun.h"
#include "HandGrenade.h"
#include "Knife.h"
#include "MachineGun.h"
#include "ShotGun.h"
#include "SniperWeapon.h"
using namespace std;


int main()
{
    int const WEAPON_KINDS = 7;
    Weapon** pWeapon = new Weapon*[WEAPON_KINDS];
    for (int i = 0; i < WEAPON_KINDS; ++i)
    {
        switch (i)
        {
            case 0:
                pWeapon[i] = new Knife;
                break;

            case 1:
                pWeapon[i] = new Gun;
                break;

            case 2:
                pWeapon[i] = new ShotGun;
                break;

            case 3:
                pWeapon[i] = new SniperWeapon;
                break;

            case 4:
                pWeapon[i] = new HandGrenade;
                break;

            case 5:
                pWeapon[i] = new MachineGun;
                break;

            case 6:
                pWeapon[i] = new Bazooka;
                break;
        }
    }
    int gun_num = 0;
    int action_num = 0;
    cout << "input 0-6: ";
    cin >> gun_num;
    if (gun_num < 0 || gun_num > 6)
    {
        cerr << "INCORRECT NUM OF WEAPON...\n";
        return 101;
    }
    cout << "input action 0..1: ";
    cin >> action_num;
    if (action_num< 0 || action_num > 1)
    {
        cerr << "INCORRECT SET...\n";
        return 404;
    }
    Weapon* weapon = pWeapon[gun_num];
    if (action_num == 0)
    {
        weapon->Aiming();
    }
    else
    {
        weapon->Shooting();
    }
    delete[] pWeapon;
    return 0;
}