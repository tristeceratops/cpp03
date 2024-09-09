/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:37:17 by ewoillar          #+#    #+#             */
/*   Updated: 2024/09/09 11:32:38 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap jose = ClapTrap("José");
	ClapTrap unnamed;
	ClapTrap paul = (std::string) "Paul";

	for (int i = 0; i < 15; i++)
		jose.attack("Paul");
	paul.takeDamage(INT_MIN);
	paul.takeDamage(15);
	paul.attack("Handsome Jack");
	unnamed.attack("Handsome Jack");
	unnamed.takeDamage(4);
	unnamed.beRepaired(2);
}