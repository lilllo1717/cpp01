#include <iostream>
#include <fstream>

static void replace_words(std::ofstream& outFile, std::string& buffer_str, std::string& s1, std::string& s2, size_t pos)
{
    size_t found = buffer_str.find(s1, pos);
    if (found == std::string::npos)
    {
        outFile << buffer_str.substr(pos);
        return ;
    }
    else
    {
        outFile << buffer_str.substr(pos, found - pos);
        outFile << s2;
        replace_words(outFile, buffer_str, s1, s2, found + s1.size());
    }
}

int main(int argc, char** argv)
{
    std::string filenameOutput;
    std::string filenameInput;
    std::ifstream inFile;
    std::ofstream outFile;
    std::string buffer_str;

    if (argc != 4)
    {
        std::cerr << "Wrong number of arguments!\n";
        return (1);
    }
    if (s1.empty() || s2.empty())
    {
        std::cerr << "s1 and s2 cant be empty!\n";
        return (1);
    }
    filenameInput = argv[1];
    filenameOutput = filenameInput + ".replace";
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    inFile.open(filenameInput);
    if (!inFile.is_open())
    {
        std::cerr << "Could not open the inout file.\n";
        return (1);
    }
    outFile.open(filenameOutput);
    if (!outFile.is_open())
    {
        std::cerr << "Could not open the output file.\n";
        return (1);
    }
    while (std::getline(inFile, buffer_str))
    {
        // std::cout << buffer_str << "\n";
        replace_words(outFile, buffer_str , s1, s2, 0);
        outFile << "\n";
    }
    return (0);
}