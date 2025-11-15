#include "Replace.hpp"

void SedWin::replace(std::string file, std::string s1, std::string s2)
{
    std::string buffer;
    size_t oldindex = 0;
    size_t pos_str = file.find(s1); // index of first occur
    while (pos_str != std::string::npos)
    {
        buffer += file.substr(oldindex, pos_str - oldindex) + s2;
        oldindex = pos_str + s1.length();
        pos_str = file.find(s1, pos_str + 1);
    }
    replaced = buffer + file.substr(oldindex, file.length());
    return ;
}

bool SedWin::outFile(std::string str)
{
    std::ofstream outfile(str + ".replace");
	if (!outfile)
	{
		std::cerr << "no permission in the file\n";
		return (0);
	}
	outfile << replaced;
    return (1);
}