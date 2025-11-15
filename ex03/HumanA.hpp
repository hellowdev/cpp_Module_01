#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"


class HumanA
{
    private:
        Weapon &weaponA; // declaration reference only not object yet otherwise default constructor
        std::string name;
    public:
        HumanA(std::string takeName, Weapon &takeObj) : 
        weaponA(takeObj), name(takeName) {}; // we need initialize the reference or error..
        ~HumanA();
        void attack();
};

#endif