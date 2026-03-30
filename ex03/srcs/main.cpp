/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:50:42 by dufama            #+#    #+#             */
/*   Updated: 2026/03/30 18:55:05 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"
#include "../headers/ScavTrap.hpp"
#include "../headers/FragTrap.hpp"
#include "../headers/DiamondTrap.hpp"

int main()
{
	DiamondTrap paul("Paul");
	paul.whoAmI();
	paul.guardGate();
	paul.highFivesGuys();
	DiamondTrap pierre("Pierre");
	paul = pierre;
	paul.whoAmI();
	ClapTrap jacque("Jacque");
	FragTrap jackie("Jackie");
	jacque.attack("Paul");
	jackie.attack("Paul");
	paul.takeDamage(30);
	DiamondTrap copy(paul);
	copy.whoAmI();

}
