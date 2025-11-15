#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        void (Harl::*ptr[4])();
    public:
        Harl()
        {
            ptr[0] = &Harl::debug;
            ptr[1] = &Harl::info;
            ptr[2] = &Harl::warning;
            ptr[3] = &Harl::error;
        };
        ~Harl(){};
        void complain( std::string level );     
};

#endif