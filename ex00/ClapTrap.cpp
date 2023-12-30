/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:54:52 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/30 13:40:45 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HitPoints(10), EnergyPoints(10), AttackDamage(0) {
  std::cout << "ClapTrap Constructor Call!" << std::endl;
}

ClapTrap::~ClapTrap() { std::cout << "ClapTrap Destructor Call!" << std::endl; }

ClapTrap::ClapTrap(const ClapTrap& rhs) {
  std::cout << "Copy constructor called" << std::endl;
  *this = rhs;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
  std::cout << "Copy assignent operator called" << std::endl;

  if (this != &rhs) {
    this->Name = rhs.Name;
    this->HitPoints = rhs.HitPoints;
    this->EnergyPoints = rhs.EnergyPoints;
    this->AttackDamage = rhs.AttackDamage;
  }
  return (*this);
}
ClapTrap::ClapTrap(std::string input_name)
    : Name(input_name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
  std::cout << "ClapTrap Constructor Call!" << std::endl;
}

bool ClapTrap::check_points() {
  return (this->EnergyPoints > 0 && this->HitPoints > 0);
}
bool ClapTrap::check_Name() { return (this->Name.empty()); }

void ClapTrap::attack(const std::string& target) {
  if (check_Name()) return;
  if (check_points()) {
    std::cout << "ClapTrap " + this->Name << " attacks " << target
              << " causing " << this->AttackDamage << " points of damage "
              << std::endl;
    this->EnergyPoints--;
  } else {
    std::cout << "No energy points or Hit points" << std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (check_Name()) return;
  if (this->HitPoints > 0) {
    std::cout << "take damaged : " << amount << std::endl;
    this->HitPoints -= amount;
  } else {
    std::cout << "No hit points" << std::endl;
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (check_Name()) return;
  if (check_points()) {
    std::cout << this->Name + " HitPoints plus : " << amount << "\n";
    this->HitPoints += amount;
    this->EnergyPoints--;
  } else {
    std::cout << "No energy points or Hit points" << std::endl;
  }
}
