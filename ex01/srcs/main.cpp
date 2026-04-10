/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:50:42 by dufama            #+#    #+#             */
/*   Updated: 2026/04/10 14:27:47 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"
#include "../headers/ScavTrap.hpp"

int main()
{
	ClapTrap pierre("Pierre");

	ClapTrap* b = new ScavTrap("paul");
	ClapTrap* a = new ClapTrap("Jean");

	b->attack("Jean");
	a->attack("Pierre");

	pierre.attack("Paul");
	pierre.takeDamage(20);


	delete b;
	delete a;
}
