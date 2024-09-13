/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 10:31:26 by ewoillar          #+#    #+#             */
/*   Updated: 2024/09/09 15:18:06 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits.h>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &src);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &rhs);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void setHealPoint(int amount);
		void setMaxHeal(int amount);
		void setEnergyPoint(int amount);
		void setAttackDamage(int amount);
	protected:
		ClapTrap(std::string name, int hp, int hp_m, int ep, int ad);
		std::string _name;
		int	healpoint;
		int	hp_max;
		int energypoint;
		int attackdamage;
};