/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:20:56 by kichan            #+#    #+#             */
/*   Updated: 2023/12/30 14:19:24 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
 private:
  std::string Name;

 public:
  DiamondTrap();
  ~DiamondTrap();
  DiamondTrap(const DiamondTrap& rhs);
  DiamondTrap& operator=(const DiamondTrap& rhs);
  DiamondTrap(std::string name);

  void attack(const std::string& target);
  void whoAmI();
};

#endif
