/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 16:12:25 by dufama            #+#    #+#             */
/*   Updated: 2026/04/08 16:31:22 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/FragTrap.hpp"

//default
FragTrap::FragTrap() : ClapTrap() {
	std::cout << "Default constructor FragTrap called" << std::endl;
	_hit = 100;
	_energy = 100;
	_attack = 30;
}

//default name
FragTrap::FragTrap(std::string const &name) : ClapTrap(name) {
	std::cout << "Default constructor FragTrap(name) called" << std::endl;
	_hit = 100;
	_energy = 100;
	_attack = 30;
}

//copy
FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
	std::cout << "Copy constructor called" << std::endl;
}

//assign
FragTrap &FragTrap::operator=(const FragTrap &assign) {
	std::cout << "operator called" << std::endl;
	if (this != &assign)
		ClapTrap::operator=(assign);
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor FragTrap called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << _name << " says: high five" << std::endl;
}

void FragTrap::sayName(void) {
	std::cout << "Hello i am " << _name << " !!" << std::endl;
}
