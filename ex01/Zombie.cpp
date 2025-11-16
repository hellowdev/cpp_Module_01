#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string newname)
{ 
    name = newname;
}

Zombie::~Zombie()
{ 
    std::cout << name << ": Everything is Cleanup...\n";
} // automatic cleanup by Freeing allocated memor inside object, closing files, ex...