#include "Replace.hpp"
#include <iostream>
#include <sstream>

int main(int ac, char *av[])
{
	if (ac != 4)
    	return (1);
	SedWin obj;
	std::string strfile;
	std::ostringstream buff;
	std::ifstream inp(av[1]);
    if (!inp || inp.peek() == EOF)
	{
		std::cout << "Failed to Open File or Empty File\n";
		return (1);
	}

	buff << inp.rdbuf();
	strfile = buff.str();
	obj.replace(strfile, av[2], av[3]);

	if (!obj.outFile(av[1]))
		return (1);



	
	
}