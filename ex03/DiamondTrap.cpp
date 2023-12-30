/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:20:52 by kichan            #+#    #+#             */
/*   Updated: 2023/12/30 15:25:58 by kichlee          ###   ########.fr       */
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
DiamondTrap::DiamondTrap(const DiamondTrap& rhs)
    : ClapTrap(rhs), FragTrap(rhs), ScavTrap(rhs) {
  std::cout << "DiamondTrap copy constructor call!" << std::endl;
  *this = rhs;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& ref) {
  std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
  if (this != &ref) {
    ScavTrap::operator=(ref);
    FragTrap::operator=(ref);
    this->Name = ref.Name;
  }
  return *this;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
  this->HitPoints = FragTrap::HitPoints;
  this->EnergyPoints = ScavTrap::EnergyPoints;
  this->AttackDamage = FragTrap::AttackDamage;
  this->Name = name;
  std::cout << "DiamondTrap Constructor call!" << std::endl;
  std::cout << "ClapTrap::Name : " << ClapTrap::Name << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
  ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
  std::cout << "I am " << this->Name << " and ClapTrap name is "
            << ClapTrap::Name << std::endl;
}
