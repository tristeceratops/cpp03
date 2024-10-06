/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 21:00:48 by marvin            #+#    #+#             */
/*   Updated: 2024/10/06 21:00:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name) {
    healpoint = 100;
    energypoint = 50;
    attackdamage = 20;
    std::cout << "ScavTrap " << _name << " constructed." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " destructed." << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (healpoint > 0 && energypoint > 0) {
        std::cout << "ScavTrap " << _name << " ferociously attacks " << target
                  << ", causing " << attackdamage << " points of damage!" << std::endl;
        energypoint--;
    } else {
        std::cout << "ScavTrap " << _name << " has no energy or hit points left to attack!" << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}