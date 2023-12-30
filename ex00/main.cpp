/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:54:08 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/30 14:53:15 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
  ClapTrap lkc("kichan");

  lkc.attack("wonie");
  lkc.beRepaired(1);
  lkc.takeDamage(10);
  lkc.takeDamage(10);
  lkc.takeDamage(10);
  lkc.takeDamage(10);
  lkc.beRepaired(10);
}