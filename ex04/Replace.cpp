#include "Replace.hpp"


void SedWin::replace(std::string file, std::string s1, std::string s2)
{
    std::string buffer;
    size_t oldindex = 0;
    size_t diff = 0;
    size_t len = file.length();
    size_t len_s1 = s1.length(); // len of s1
    size_t pos_str = file.find(s1); // index of first occur
    while (pos_str != std::string::npos)
    {
        diff = pos_str - oldindex;
        std::cout << "diff "<<  diff << '\n';
        buffer += file.substr(oldindex, diff) + s2;
        oldindex = pos_str + len_s1; // 2
        std::cout << "old finder "<<  oldindex << '\n';
        pos_str = file.find(s1, pos_str + 1); // 7
        std::cout << "pos finder "<<  pos_str << '\n';
    }
    buffer += file.substr(oldindex, len);
    // if (pos_str == std::string::npos)
    // {
    //     replaced = file;
    //     return ;
    // }
    // buffer = file.substr(0, pos_str) + s2 + file.substr(pos_str + len_s1, len);
    replaced = buffer;
    return ;
}


bool SedWin::outFile(std::string str)
{
    std::ofstream outfile(str + ".replace");
	if (!outfile)
	{
		std::cout << "no permission in the file\n";
		return (0);
	}

	outfile << replaced;

    return (1);
}