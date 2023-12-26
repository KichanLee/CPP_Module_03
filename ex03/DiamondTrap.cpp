/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:20:52 by kichan            #+#    #+#             */
/*   Updated: 2023/12/26 21:32:50 by kichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"),
      FragTrap(name),
      ScavTrap(name),
      name(name) {
  this->HitPoints = FragTrap::HitPoints;
  this->EnergyPoints = ScavTrap::EnergyPoints;
  this->AttackDamage = FragTrap::AttackDamage;
  std::cout << "DiamondTrap " << this->name << " is created." << std::endl;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap " << this->name << " is destroyed." << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
  ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
  std::cout << "I am " << this->name << " and ClapTrap name is "
            << ClapTrap::Name << std::endl;
}
