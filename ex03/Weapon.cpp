#include "Weapon.hpp"

Weapon::Weapon(std::string takeWep) : type(takeWep){}
Weapon::~Weapon(){}

void Weapon::setType(std::string str)
{
    type = str;
}

const std::string& Weapon::getType() const 
{
    return type;
}
