/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:24:38 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/23 13:52:46 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 private:
  /* data */
 public:
  ScavTrap(std::string Name);
  ~ScavTrap();
  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  bool check_points();
  void guardGate();
};

#endif