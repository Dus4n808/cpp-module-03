/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 16:58:43 by dufama            #+#    #+#             */
/*   Updated: 2026/03/30 18:58:10 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/DiamondTrap.hpp"

//Default
DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name") , FragTrap(), ScavTrap() {
	std::cout << "Constructor DiamondTrap called" << std::endl;
	_name = "Default";
	_hit = 100;
	_energy = 50;
	_attack = 30;
}

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
	std::cout << "Constructor DiamondTrap called" << std::endl;
	_name = name;
	_hit = 100;
	_energy = 50;
	_attack = 30;
}

//copy
DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy) {
	_name = copy._name;
	std::cout << "Copy DiamondTrap called" << std::endl;
}

//assign
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &assign) {
	if (this != &assign)
	{
		ClapTrap::operator=(assign);
		_name = assign._name;
	}
	return *this;
}

//destructor
DiamondTrap::~DiamondTrap() {
	std::cout << "Destructor DiamondTrap called" << std::endl;
}

//func membre
void DiamondTrap::whoAmI(void) {
	std::cout << ClapTrap::_name << std::endl;
	std::cout << _name << std::endl;
}


