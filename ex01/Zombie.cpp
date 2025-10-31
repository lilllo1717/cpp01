#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name)
    : name(name)
{
    std::cout << "\033[32m" << name << " zombie created." << "\033[0m" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "\033[31m" << name << " is destroyed." << "\033[0m" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}