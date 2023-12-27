/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:54:56 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/27 16:15:55 by kichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include <iostream>
#include <string>

class ClapTrap {
 private:
  std::string Name;
  int HitPoints;
  int EnergyPoints;
  int AttackDamage;

 public:
  ClapTrap(std::string input_name);
  ~ClapTrap();
  ClapTrap(const ClapTrap& rhs);
  ClapTrap& operator=(const ClapTrap& rhs);

  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  bool check_points();
};

#endif