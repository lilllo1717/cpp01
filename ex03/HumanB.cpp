/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tignatov <tignatov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:22:42 by tignatov          #+#    #+#             */
/*   Updated: 2025/10/29 12:36:26 by tignatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
    :   name(name),
        weapon(NULL)
{

}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weaponType)
{
    weapon = &weaponType;
}

void HumanB::attack() const
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon to fight wtih!\n";
}