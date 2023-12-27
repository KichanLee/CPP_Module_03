/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:54:52 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/27 16:22:26 by kichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string input_name)
    : Name(input_name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
  std::cout << "ClapTrap Constructor Call!" << std::endl;
}

ClapTrap::~ClapTrap() { std::cout << "ClapTrap Destructor Call!" << std::endl; }

ClapTrap::ClapTrap(const ClapTrap& rhs) {
  if (this != &rhs) *this = rhs;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
  if (this != &rhs) {
    this->Name = rhs.Name;
    this->HitPoints = rhs.HitPoints;
    this->EnergyPoints = rhs.EnergyPoints;
    this->AttackDamage = rhs.AttackDamage;
  }
  return (*this);
}

bool ClapTrap::check_points() { return (this->EnergyPoints > 0); }

void ClapTrap::attack(const std::string& target) {
  if (check_points()) {
    std::cout << "ClapTrap " + this->Name << " attacks " << target
              << " causing " << this->AttackDamage << " points of damage "
              << std::endl;
    this->EnergyPoints--;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "take damaged" << amount << std::endl;
  this->EnergyPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (check_points()) {
    std::cout << this->Name + " HitPoints plus" << amount << "!\n";
    this->HitPoints += amount;
    this->EnergyPoints--;
  }
}
