#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"


class HumanA
{
    private:
        Weapon &weaponA; // declaration reference only not object yet otherwise default constructor
        std::string name;
    public:
        HumanA(std::string takeName, Weapon &takeObj);
        ~HumanA();
        void attack();
};

#endif