/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:42:51 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/30 15:29:42 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
  std::cout << "FragTrap constructor Call!\n";
  HitPoints = 100;
  EnergyPoints = 100;
  AttackDamage = 30;
}

FragTrap::~FragTrap() { std::cout << "FragTrap destructor Call!\n"; }

FragTrap::FragTrap(const FragTrap& rhs) : ClapTrap(rhs) {
  std::cout << "FragTrap Copy Constructor Call!\n";
  *this = rhs;
}
FragTrap& FragTrap::operator=(const FragTrap& rhs) {
  std::cout << "FragTrap Copy assignent operator called\n";

  if (this != &rhs) {
    ClapTrap::operator=(rhs);
    this->Name = rhs.Name;
    this->HitPoints = rhs.HitPoints;
    this->EnergyPoints = rhs.EnergyPoints;
    this->AttackDamage = rhs.AttackDamage;
  }
  return (*this);
}

FragTrap::FragTrap(std::string Name) {
  std::cout << "FragTrap constructor Call!\n";
  HitPoints = 100;
  EnergyPoints = 100;
  AttackDamage = 30;
  this->Name = Name;
}

void FragTrap::highFiveGuys() {
  if (check_Name()) return;
  std::cout << this->Name << "How about highFive?\n";
}

bool FragTrap::check_points() {
  return (this->EnergyPoints > 0 && this->HitPoints > 0);
}

void FragTrap::attack(const std::string& target) {
  if (check_Name()) return;
  if (check_points()) {
    std::cout << "FragTrap " + this->Name << " attacks " << target
              << " causing " << this->AttackDamage << " points of damage "
              << std::endl;
    this->EnergyPoints--;
  } else {
    std::cout << "No energy points or Hit points" << std::endl;
  }
}
bool FragTrap::check_Name() { return (this->Name.empty()); }

void FragTrap::change_name() {
  this->Name = "kimdonghyun";
  std::cout << "FragTrap name" << FragTrap::Name << std::endl;
  std::cout << "claptrap name" << ClapTrap::Name << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
  if (check_Name()) return;
  if (this->HitPoints > 0) {
    std::cout << "take damaged : " << amount << std::endl;
    this->HitPoints -= amount;
  } else {
    std::cout << "No hit points" << std::endl;
  }
}

void FragTrap::beRepaired(unsigned int amount) {
  if (check_Name()) return;
  if (check_points()) {
    std::cout << this->Name + " HitPoints plus" << amount << "!\n";
    this->HitPoints += amount;
    this->EnergyPoints--;
  } else {
    std::cout << "No energy points or Hit points" << std::endl;
  }
}