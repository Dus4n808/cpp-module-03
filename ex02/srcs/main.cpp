/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:50:42 by dufama            #+#    #+#             */
/*   Updated: 2026/04/13 13:33:24 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"
#include "../headers/ScavTrap.hpp"
#include "../headers/FragTrap.hpp"

int main()
{
	ClapTrap *a[3];

	FragTrap paul("Paul");
	paul.highFivesGuys();

	a[0] = new ScavTrap;
	a[1] = new ClapTrap;
	a[2] = new FragTrap;

	a[0]->attack("Paul");
	a[1]->attack("Jack");
	a[0]->getHit();
	a[1]->getHit();
	a[2]->getHit();
	delete a[0];
	delete a[1];
	delete a[2];

}
