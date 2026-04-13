/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:50:42 by dufama            #+#    #+#             */
/*   Updated: 2026/04/13 14:16:19 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"
#include "../headers/ScavTrap.hpp"
#include "../headers/FragTrap.hpp"
#include "../headers/DiamondTrap.hpp"

int main()
{
	DiamondTrap paul("Paul");
	paul.attack("Jean");
	paul.whoAmI();

}
