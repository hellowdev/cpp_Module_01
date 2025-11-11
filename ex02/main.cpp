#include <iostream>
#include <string>

int main()
{
    std::string brain = "HI THIS IS BRAIN";

    std::string *stringPTR = &brain;
    std::string &stringREF = brain; // THIS IS REFERENCE CAN HAVE ONLY ONE ADRESS OF THE OBJECT GIVING NOT LIKE POINTER HOLD ONE AND POINT TO ANOTHER ONE
    

    // ------- ADRESS --------------//
    std::cout << "The memory address of the string variable: "<< &brain << '\n';
    std::cout << "The memory address held by stringPTR: "<< stringPTR << '\n';
    std::cout << "The memory address held by stringREF: "<< &stringREF << '\n';
    // ------- VALUES --------------//
    std::cout << "The value of the string variable: "<< brain << '\n';
    std::cout << "The value pointed to by stringPTR: "<< *stringPTR << '\n';
    std::cout << "The value pointed to by stringREF: "<< stringREF << '\n';
}






















