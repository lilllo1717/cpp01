
#include <string>
#include <iostream>
#include <cctype>

int main(void)
{
    std::string stringy = "HI THIS IS BRAIN";
    std::string* stringPTR = new std::string("HI THIS IS BRAIN");
    std::string& stringREF = stringy;

    std::cout << "Address of stringy: " << &stringy << std::endl;
    std::cout << "Address of stringPTR: " << stringPTR << std::endl;
    std::cout << "Address of stringREF: " << &stringREF << std::endl;

    std::cout << "Value of stringy: " << stringy << std::endl;
    std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value of stringREF: " << stringREF << std::endl;

    delete stringPTR;
}
