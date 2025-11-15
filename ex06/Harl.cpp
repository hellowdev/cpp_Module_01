#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
   
    int i = -1;
    while (((i < 0 && level.compare("DEBUG") == 0) || (i < 1 && level.compare("INFO") == 0))
    || (i < 2 && level.compare("WARNING") == 0) || (i < 3 && level.compare("ERROR") == 0))
        i++;
    switch (i)
    {
        case 0:
            std::cout << "[ DEBUG ]\n";
            (this->*ptr[i])();
            std::cout << "\n";
            i++;
        case 1:
            std::cout << "[ INFO ]\n";
            (this->*ptr[i])();
            std::cout << "\n";
            i++;
        case 2:
            std::cout << "[ WARNING ]\n";
            (this->*ptr[i])();
            std::cout << "\n";
            i++;
        case 3:
            std::cout << "[ ERROR ]\n";
            (this->*ptr[i])();
            std::cout << "\n";
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            break;
    }
}