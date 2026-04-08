/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 18:10:20 by dufama            #+#    #+#             */
/*   Updated: 2026/04/08 16:28:41 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ScavTrap.hpp"


//Default
ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "Default constructor ScavTrap called" << std::endl;
	_hit = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name) {
	std::cout << "Default constructor ScavTrap(name) called" << std::endl;
	_hit = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
	std::cout << "Copy ScavTrap called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &assign) {
	if (this != &assign)
		ClapTrap::operator=(assign);
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap called" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "That ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}

