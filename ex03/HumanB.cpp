#include "HumanB.hpp"

HumanB::HumanB(std::string takeName) : name(takeName), weaponB(NULL){}
HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon &club)
{
    weaponB = &club;
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << weaponB->getType() << '\n';
}
