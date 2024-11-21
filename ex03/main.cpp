/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:37:17 by ewoillar          #+#    #+#             */
/*   Updated: 2024/11/21 18:12:55 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
	std::cout << "### TESTING CLAPTRAP ###\n" << std::endl;
	{
		std::cout << "\033[5;34mConstructing\033[0m" << std::endl;
		ClapTrap a;
		ClapTrap b("Cody");

		std::cout << "\033[5;34mTesting\033[0m" << std::endl;
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
		a = b;
		a.attack("some other robot");
		b.attack("some other robot");
		std::cout << "\033[5;34mDeconstructing\033[0m" << std::endl;
	}

		std::cout << "\n### TESTING SCAVTRAP ###\n" << std::endl;
	{
		std::cout << "\033[5;34mConstructing\033[0m" << std::endl;
		ScavTrap a;
		ScavTrap b("Cody");

		std::cout << "\033[5;34mTesting\033[0m" << std::endl;
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 50; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
		a = b;
		a.attack("some other robot");
		b.attack("some other robot");
		a.guardGate();
		a.guardGate();
		a.guardGate();
		b.guardGate();
		b.guardGate();
		std::cout << "\033[5;34mDeconstructing\033[0m" << std::endl;
	}
	
	std::cout << "\n### TESTING FRAGTRAP ###\n" << std::endl;
	{
		std::cout << "\033[5;34mConstructing\033[0m" << std::endl;
		FragTrap a;
		FragTrap b("Cody");

		std::cout << "\033[5;34mTesting\033[0m" << std::endl;
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 50; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
		a = b;
		a.attack("some other robot");
		b.attack("some other robot");
		a.highFivesGuys();
		a.highFivesGuys();
		a.highFivesGuys();
		b.highFivesGuys();
		b.highFivesGuys();
		std::cout << "\033[5;34mDeconstructing\033[0m" << std::endl;
	}

		std::cout << "\n### TESTING DIAMONDTRAP ###\n" << std::endl;
	{
		std::cout << "\033[5;34mConstructing\033[0m" << std::endl;
		DiamondTrap a;
		DiamondTrap b("Cody");

		std::cout << "\033[5;34mTesting\033[0m" << std::endl;
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 50; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
		a = b;
		a.attack("some other robot");
		b.attack("some other robot");
		a.highFivesGuys();
		a.highFivesGuys();
		a.highFivesGuys();
		b.highFivesGuys();
		b.highFivesGuys();
		std::cout << "\033[5;34mDeconstructing\033[0m" << std::endl;
	}
    return 0;
}