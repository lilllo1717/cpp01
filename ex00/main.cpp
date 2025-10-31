#include "Zombie.hpp"


int main(void)
{
    Zombie* new_zombie;
    new_zombie = newZombie("Bob");
    new_zombie->announce();
    randomChump("Jack");
    delete new_zombie;
}