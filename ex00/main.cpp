#include "Zombie.hpp"


int main()
{
    Zombie *heapZomb; // declaring only empty obj and point to it, wihtout constr
    
    randomChump("stack");
    heapZomb = newZombie("heap");
    heapZomb->announce();
    delete heapZomb; // delete invoke destructor before deallocating memory
}