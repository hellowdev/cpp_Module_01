#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <fstream>
#include <iostream>
#include <sstream>

class SedWin
{
    private:
        std::string  replaced;
        std::string  src_file;
    public:
        void replace(std::string file, std::string s1, std::string s2);
        bool outFile(std::string str);
        SedWin(){};
        ~SedWin(){};
};


#endif