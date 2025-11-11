#include "Zombie.hpp"

int main()
{
    Zombie *horde;
    horde = zombieHorde( 4, "hordeZoM" );
    for (int i = 0; i < 4; i++)
        horde[i].announce();
    delete[] horde;
}