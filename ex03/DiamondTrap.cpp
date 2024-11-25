/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 22:03:58 by marvin            #+#    #+#             */
/*   Updated: 2024/11/25 16:43:21 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_trap"), ScavTrap("default_scav_trap"), FragTrap("default_frag_trap"), _name("default") {
    this->healpoint = FragTrap::healpoint;
    this->energypoint = ScavTrap::energypoint;
    this->attackdamage = FragTrap::attackdamage;
    std::cout << "\033[31mDiamondTrap " << this->_name << " is created\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap"), ScavTrap(name + "_scav_trap"), FragTrap(name + "_frag_trap"), _name(name) {
    this->healpoint = FragTrap::healpoint;
    this->energypoint = ScavTrap::energypoint;
    this->attackdamage = FragTrap::attackdamage;
    std::cout << "\033[31mDiamondTrap " << this->_name << " is created\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy) {
    *this = copy;
    std::cout << "\033[31mDiamondTrap " << this->_name << " is created\033[0m" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "\033[31mDiamondTrap " << this->_name << " is destroyed\033[0m" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
    if (this != &rhs) {
        ClapTrap::operator=(rhs);
        this->_name = rhs._name;
    }
    return *this;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "\033[31mI am " << this->_name << " and my ClapTrap name is \033[0m" << ClapTrap::_name << std::endl;
}