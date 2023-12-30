/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 14:11:28 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/30 15:42:07 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
 public:
  FragTrap();
  ~FragTrap();
  FragTrap(const FragTrap& rhs);
  FragTrap& operator=(const FragTrap& rhs);
  FragTrap(std::string Name);

  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  bool check_points();
  bool check_Name();
  void highFiveGuys(void);
};

#endif