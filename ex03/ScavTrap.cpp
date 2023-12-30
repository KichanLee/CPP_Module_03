/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:24:41 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/30 13:42:19 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
  std::cout << "ScavTrap constructor Call!\n";
  HitPoints = 100;
  EnergyPoints = 50;
  AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string Name) {
  std::cout << "ScavTrap constructor Call!\n";
  this->Name = Name;
  this->HitPoints = 100;
  this->EnergyPoints = 50;
  this->AttackDamage = 20;
}

ScavTrap::~ScavTrap() { std::cout << "ScavTrap destructor Call!\n"; }

ScavTrap::ScavTrap(ScavTrap& rhs) {
  std::cout << "ScavTrap Copy Constructor Call!\n";
  *this = rhs;
}
ScavTrap& ScavTrap::operator=(ScavTrap& rhs) {
  std::cout << "ScavTrap Copy assignent operator called\n";

  if (this != &rhs) {
    this->Name = rhs.Name;
    this->HitPoints = rhs.HitPoints;
    this->EnergyPoints = rhs.EnergyPoints;
    this->AttackDamage = rhs.AttackDamage;
  }
  return (*this);
}
void ScavTrap::guardGate() {
  if (check_Name()) return;
  std::cout << this->Name << " now on Gate keeper mode\n";
}
bool ScavTrap::check_Name() { return (this->Name.empty()); }
bool ScavTrap::check_points() {
  return (this->EnergyPoints > 0 && this->HitPoints > 0);
}

void ScavTrap::attack(const std::string& target) {
  if (check_Name()) return;
  if (check_points()) {
    std::cout << "ScavTrap " + this->Name << " attacks " << target
              << " causing " << this->AttackDamage << " points of damage "
              << std::endl;
    this->EnergyPoints--;
  } else {
    std::cout << "No energy points or Hit points" << std::endl;
  }
}

void ScavTrap::takeDamage(unsigned int amount) {
  if (check_Name()) return;
  if (this->HitPoints > 0) {
    std::cout << "take damaged" << amount << std::endl;
    this->HitPoints -= amount;
  } else {
    std::cout << "No hit points" << std::endl;
  }
}

void ScavTrap::beRepaired(unsigned int amount) {
  if (check_Name()) return;
  if (check_points()) {
    std::cout << this->Name + " HitPoints plus" << amount << "!\n";
    this->HitPoints += amount;
    this->EnergyPoints--;
  } else {
    std::cout << "No energy points or Hit points" << std::endl;
  }
}