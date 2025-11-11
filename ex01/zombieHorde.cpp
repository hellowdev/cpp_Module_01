#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *objarr = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        objarr[i] = Zombie(name);  // this is a temporary object we get the copy of it and it will destruct after this line
        // Zombie Z(name); // the same thing but this one will destroyed after the scop func
        // objarr[i] = Z; 
    }
    return (objarr);
}