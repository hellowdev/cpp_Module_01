#include "HumanA.hpp"

HumanA::HumanA(std::string takeName, Weapon &takeObj) : weaponA(takeObj), name(takeName){} // we need initialize the reference or error..
HumanA::~HumanA(){}
void HumanA::attack()
{
    std::cout << name << " attacks with their " << weaponA.getType() << '\n';
}