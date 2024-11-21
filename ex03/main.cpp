/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:37:17 by ewoillar          #+#    #+#             */
/*   Updated: 2024/11/14 14:02:54 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    ClapTrap claptrap("CT-01");
    claptrap.attack("target1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.attack("target2");

    std::cout << "------------------------" << std::endl;

    ScavTrap scavtrap("ST-01");
    scavtrap.attack("target3");
    scavtrap.takeDamage(30);
    scavtrap.beRepaired(20);
    scavtrap.guardGate();

	std::cout << "------------------------" << std::endl;

	FragTrap fragtrap("FT-01");
	fragtrap.attack("target4");
	fragtrap.takeDamage(30);
	fragtrap.beRepaired(20);
	fragtrap.highFivesGuys();

	std::cout << "------------------------" << std::endl;

	DiamondTrap diamondtrap("DT-01");
	diamondtrap.attack("target4");
	diamondtrap.takeDamage(30);
	diamondtrap.beRepaired(20);
	diamondtrap.guardGate();

    return 0;
}