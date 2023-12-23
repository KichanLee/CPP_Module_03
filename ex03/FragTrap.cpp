/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:42:51 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/23 15:45:32 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) {
  std::cout << "FragTrap constructor Call!\n";
  HitPoints = 100;
  EnergyPoints = 100;
  AttackDamage = 30;
}

FragTrap::~FragTrap() { std::cout << "FragTrap destructor Call!\n"; }

void FragTrap::highFiveGuys() {
  std::cout << this->Name << "How about highFive?\n";
}

bool FragTrap::check_points() { return (this->EnergyPoints > 0); }

void FragTrap::attack(const std::string& target) {
  if (check_points()) {
    std::cout << "ClapTrap " + this->Name << " attacks " << target
              << " causing " << this->AttackDamage << " points of damage "
              << std::endl;
    this->EnergyPoints--;
  }
}

void FragTrap::takeDamage(unsigned int amount) {
  std::cout << "take damaged" << amount << std::endl;
  this->EnergyPoints -= amount;
}

void FragTrap::beRepaired(unsigned int amount) {
  if (check_points()) {
    std::cout << this->Name + " HitPoints plus" << amount << "!\n";
    this->HitPoints += amount;
    this->EnergyPoints--;
  }