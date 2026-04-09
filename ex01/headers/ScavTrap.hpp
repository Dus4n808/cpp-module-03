/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 18:09:43 by dufama            #+#    #+#             */
/*   Updated: 2026/04/09 17:56:09 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "../headers/ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string const &name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &assign);
		~ScavTrap();

		void guardGate();
		void attack(const std::string &name);
		//my test
		void getHit();
		void getEnergy();

};


#endif
