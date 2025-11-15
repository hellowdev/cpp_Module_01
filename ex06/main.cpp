#include "Harl.hpp"

int main(int ac, char *av[])
{
    switch (ac)
    {
        case 2:
            break;
        
        default:
            return 1;
    }
    Harl obj;

    obj.complain(av[1]);
    
}