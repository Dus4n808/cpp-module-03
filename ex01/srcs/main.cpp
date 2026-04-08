/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:50:42 by dufama            #+#    #+#             */
/*   Updated: 2026/04/08 15:58:42 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"
#include "../headers/ScavTrap.hpp"

int main()
{
	//first
	ScavTrap bob("Bob");
	bob.getEnergy();
	bob.getHit();

	//second
	ScavTrap paul("Paul");
	paul.getEnergy();
	paul.getHit();

	//action

	paul.attack("Bob");
	bob.takeDamage(20);
	bob.getHit();
	bob.beRepaired(20);
	bob.getEnergy();
	bob.getHit();
	bob.guardGate();

	//copy test
	ScavTrap pierre("Pierre");
	pierre = bob;
	ScavTrap a(pierre);
	pierre.getEnergy();
	a.getEnergy();

}
