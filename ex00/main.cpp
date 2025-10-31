
#include "PhoneBook.hpp"
#include "Contact.hpp"


void parseContactInput(PhoneBook& phonebook);

int main(void)
{
    PhoneBook phonebook1;
    std::string command;
    while (1)
    {
        std::cout << "Enter a Command: ADD, SEARCH or EXIT:  ";
        std::getline(std::cin, command);
        if (std::cin.eof() == 1)
            exit(0);
        if (command.compare("ADD") == 0)
            parseContactInput(phonebook1);
        else if (command.compare("SEARCH") == 0)
        {
            phonebook1.printPhoneBook();
            std::string index;
            std::cout << "Enter Index:  ";
            std::getline(std::cin, index);
            try
            {
                int indx = std::stoi(index);
                const Contact& cont1 = phonebook1.getContactInfo(indx);
                phonebook1.printContact(cont1);
            }
            catch (const std::exception&)
            {
                std::cerr << "Input is invalid or index is out of range!" << std::endl;
            }
        }
        else if (command.compare("EXIT") == 0)
            break ;
        else
            std::cout << "Unknown command. Try again." << std::endl;
    }
    return 0;
}