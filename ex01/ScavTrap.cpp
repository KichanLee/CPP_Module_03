/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:24:41 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/23 13:57:33 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name) {
  std::cout << "ScavTrap constructor Call!\n";
  HitPoints = 100;
  EnergyPoints = 50;
  AttackDamage = 20;
}

ScavTrap::~ScavTrap() { std::cout << "ScavTrap destructor Call!\n"; }

void ScavTrap::guardGate() {
  std::cout << this->Name << " now on Gate keeper mode\n";
}

bool ScavTrap::check_points() { return (this->EnergyPoints > 0); }
// std::string 과 객체명이 같은 경우에 처리해주는 건지?
void ScavTrap::attack(const std::string& target) {
  if (check_points()) {
    std::cout << "ClapTrap " + this->Name << " attacks " << target
              << " causing " << this->AttackDamage << " points of damage "
              << std::endl;
    this->EnergyPoints--;
  }
}

void ScavTrap::takeDamage(unsigned int amount) {
  std::cout << "take damaged" << amount << std::endl;
  this->EnergyPoints -= amount;
}

void ScavTrap::beRepaired(unsigned int amount) {
  if (check_points()) {
    std::cout << this->Name + " HitPoints plus" << amount << "!\n";
    this->HitPoints += amount;
    this->EnergyPoints--;
  }
}