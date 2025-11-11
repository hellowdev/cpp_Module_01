#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <string>
#include "Weapon.hpp"


class HumanA
{
    private:
        Weapon &weaponA; // declaration reference only not object yet otherwise default constructor
        std::string name;
    public:
        HumanA(std::string takeName, Weapon &takeObj)
        : name(takeName), weaponA(takeObj){}; // we need initialize the reference or error..
        ~HumanA();
        void attack();
};

#endif