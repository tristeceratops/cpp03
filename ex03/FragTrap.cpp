/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:08:21 by marvin            #+#    #+#             */
/*   Updated: 2024/11/21 18:07:51 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->healpoint = 100;
	this->energypoint = 100;
	this->attackdamage = 30;
	std::cout << "\033[32mFragTrap Default Constructor called\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << "\033[32mFragTrap Copy Constructor called\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->healpoint = 100;
	this->energypoint = 100;
	this->attackdamage = 30;
	std::cout << "\033[32mFragTrap Constructor for the name " << this->_name << " called\033[0m" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[32mFragTrap Deconstructor for " << this->_name << " called\033[0m" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "\033[32mFragTrap Assignation operator called\033[0m" << std::endl;
	this->_name = src._name;
	this->healpoint = src.healpoint;
	this->energypoint = src.energypoint;
	this->attackdamage = src.attackdamage;
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "\033[32mFragTrap " << this->_name << " is asking for a high five!\033[0m" << std::endl;
}