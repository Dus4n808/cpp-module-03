/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:50:42 by dufama            #+#    #+#             */
/*   Updated: 2026/03/25 17:53:27 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"

int main()
{
	ClapTrap kill("Dusan");
	ClapTrap victime("Fab");

	kill.attack("Fab");
	victime.takeDamage(10);
	victime.beRepaired(1);
	return 0;
}
