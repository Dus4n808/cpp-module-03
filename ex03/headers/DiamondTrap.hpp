/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 16:54:39 by dufama            #+#    #+#             */
/*   Updated: 2026/04/09 16:30:59 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "../headers/ClapTrap.hpp"
#include "../headers/FragTrap.hpp"
#include "../headers/ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string _name;
	public:
	//defautl
		DiamondTrap();
		DiamondTrap(std::string const &name);
	//copy
		DiamondTrap(const DiamondTrap &copy);
	//assign
		DiamondTrap &operator=(const DiamondTrap &assign);
	//destructor
		~DiamondTrap();
		void whoAmI(void);


};

#endif
