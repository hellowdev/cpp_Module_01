#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &club)
{
    weaponB = &club;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << weaponB->getType() << '\n';
}