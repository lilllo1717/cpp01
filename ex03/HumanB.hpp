#ifndef HUMANB_H
#define HUMANB_H


# include "Weapon.hpp"
# include <iostream>
# include <iomanip>

class HumanB
{
    private:
        std::string name;
        Weapon* weapon;

    public:
        HumanB(const std::string& name);
        ~HumanB();
        void attack() const;
        void setWeapon(Weapon& weapon_type);


};

#endif