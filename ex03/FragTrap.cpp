/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:08:21 by marvin            #+#    #+#             */
/*   Updated: 2024/11/29 17:43:07 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->_hitPoint = 100;
	this->_energypoint = 100;
	this->_attackdamage = 30;
	std::cout << "\033[32mFragTrap Default Constructor called\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << "\033[32mFragTrap Copy Constructor called\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energypoint = 100;
	this->_attackdamage = 30;
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
	this->_hitPoint = src._hitPoint;
	this->_energypoint = src._energypoint;
	this->_attackdamage = src._attackdamage;
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "\033[32mFragTrap " << this->_name << " is asking for a high five!\033[0m" << std::endl;
}