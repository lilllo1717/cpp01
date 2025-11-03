#ifndef HUMANA_H
#define HUMANA_H


# include "Weapon.hpp"
# include <iostream>
# include <iomanip>

class HumanA
{
    private:
        std::string name;
        Weapon& weapon;

    public:
        HumanA(const std::string& name, Weapon& weapon);
        ~HumanA();
        void attack() const;

};

#endif