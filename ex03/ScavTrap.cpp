/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 21:00:48 by marvin            #+#    #+#             */
/*   Updated: 2024/11/21 17:48:35 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->healpoint = 100;
	this->energypoint = 50;
	this->attackdamage = 20;
	this->_isGuard = false;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->healpoint = 100;
	this->energypoint = 50;
	this->attackdamage = 20;
	this->_isGuard = false;
	std::cout << "ScavTrap Constructor for the name " << this->_name << " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	*this = copy;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Deconstructor for " << this->_name << " called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->healpoint = src.healpoint;
	this->energypoint = src.energypoint;
	this->attackdamage = src.attackdamage;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (energypoint > 0 && healpoint > 0)
	{
		std::cout << "Scavtrap " << _name << " attacks " << target << " ,causing " << this->attackdamage << " points of damage !" << std::endl;
		this->energypoint--;
	}
	else
		std::cout << "Scavtrap " <<_name <<  (energypoint > 0 ? " is already dead" :" is too low on energy !" ) << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_isGuard == false)
	{
		this->_isGuard = true;
		std::cout << "ScavTrap " << this->_name << " is now guarding the gate." << std::endl;
	}
	else
		std::cout << "\033[33mScavTrap " << this->_name << " is already guarding the gate.\033[0m" << std::endl;
}