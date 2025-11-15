#include "Zombie.hpp"

Zombie::Zombie(std::string newname)
{
    name = newname;
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{ 
    std::cout << name << ": Everything is Cleanup...\n";
} // automatic cleanup by Freeing allocated memor inside object, closing files, ex...