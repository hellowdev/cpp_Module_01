#include "HumanA.hpp"
#include <iostream>


HumanA::~HumanA()
{
}
void HumanA::attack()
{
    std::cout << name << " attacks with their " << weaponA.getType() << '\n';
}