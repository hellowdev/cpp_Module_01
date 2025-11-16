#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"


class HumanB
{
    private:
        std::string name;
        Weapon *weaponB; // we cant use reference here cuz we cant initialize it, so pointer's fine and not object yet
    public:
        HumanB(std::string takeName);
        ~HumanB();
        void setWeapon(Weapon &club);
        void attack();

};

#endif