
#ifndef ZOMBIE_H
#define ZOMBIE_H

# include <string>
# include <iostream>
# include <cctype>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(const std::string name);
        ~Contact();

        void announce(void);

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);


#endif