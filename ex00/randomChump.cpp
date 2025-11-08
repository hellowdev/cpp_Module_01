#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie obj(name); // initialize constractor with param value

    obj.announce();
} // end life of the obj && destractor invoked