/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:24:38 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/21 18:38:33 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 private:
  /* data */
 public:
  ScavTrap(std::string Name) : ClapTrap(Name) {
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
  }
  ~ScavTrap();
};
