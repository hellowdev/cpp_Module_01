#include "Weapon.hpp"

Weapon::~Weapon()
{
}

void Weapon::setType(std::string str)
{
    type = str;
}

const std::string& Weapon::getType() const 
{
    return type;
}
