/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:24:38 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/26 20:35:52 by kichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
 private:
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