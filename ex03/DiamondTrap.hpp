/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:20:56 by kichan            #+#    #+#             */
/*   Updated: 2023/12/29 23:50:38 by kichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
 private:
  std::string name;

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
