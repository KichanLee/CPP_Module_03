/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:20:52 by kichan            #+#    #+#             */
/*   Updated: 2023/12/30 14:05:31 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
  std::cout << "DiamondTrap Constructor call!" << std::endl;
  this->HitPoints = FragTrap::HitPoints;
  this->EnergyPoints = ScavTrap::EnergyPoints;
  this->AttackDamage = FragTrap::AttackDamage;
}
DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap Destructor call!" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap& rhs) {
  std::cout << "DiamondTrap copy constructor call!" << std::endl;
  *this = rhs;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& ref) {
  std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
  if (this != &ref) {
    ClapTrap::operator=(ref);
    ScavTrap::operator=(ref);
    FragTrap::operator=(ref);
    this->name = ref.name;
  }
  return *this;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"),
      FragTrap(name),
      ScavTrap(name),
      name(name) {
  this->HitPoints = FragTrap::HitPoints;
  this->EnergyPoints = ScavTrap::EnergyPoints;
  this->AttackDamage = FragTrap::AttackDamage;
  std::cout << "DiamondTrap Constructor call!" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
  ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
  std::cout << "I am " << this->name << " and ClapTrap name is "
            << ClapTrap::Name << std::endl;
}
