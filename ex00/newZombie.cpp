#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *obj = new(std::nothrow) Zombie(name); // allocating an obj and initializ the constrac with param
    
    return (obj);
} // we can use this obj anywhere in our prog before delete it