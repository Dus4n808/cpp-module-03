/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:51:08 by dufama            #+#    #+#             */
/*   Updated: 2026/03/30 16:27:55 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"

//default

ClapTrap::ClapTrap() : _name("default"), _hit(10), _energy(10), _attack(0) {
	std::cout << "Constructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name) : _name(name), _hit(10), _energy(10), _attack(0) {
	std::cout << "Constructor ClapTrap called" << std::endl;
}

//copy
ClapTrap::ClapTrap(const ClapTrap &copy) : _name(copy._name), _hit(copy._hit), _energy(copy._energy), _attack(copy._attack) {
	std::cout << "Copy ClapTrap called" << std::endl;
}

//assign
ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit = rhs._hit;
		this->_energy = rhs._energy;
		this->_attack = rhs._attack;
	}
	return *this;
}

//destructor
ClapTrap::~ClapTrap() {
	std::cout << "Destructor ClapTrap called" << std::endl;
}


void ClapTrap::attack(const std::string &target) {
	if (_energy > 0 && _hit > 0)
	{
		_energy -= 1;
		std::cout << "ClapTrap "<< _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << _name << " can't attack (no energy or no hit points left)" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hit == 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead !" << std::endl;
		return ;
	}
	if (amount >= _hit)
	{
		_hit = 0;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage and is DESTROYED!" << std::endl;
	}
	else
	{
		_hit -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage !(" << _hit << " HP left)" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hit == 0 || _energy == 0)
	{
		std::cout << "ClapTrap " << _name << " can't repair itself (no HP or no energy left)!" << std::endl;
		return ;
	}

	_hit += amount;
	_energy -= 1;

	std::cout << "ClapTrap " << _name << " repairs itself " << amount << " HP!(" << _hit << " HP left)" << std::endl;
}
