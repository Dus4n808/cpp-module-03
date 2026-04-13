/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:50:42 by dufama            #+#    #+#             */
/*   Updated: 2026/04/13 13:22:18 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"

int main()
{
	ClapTrap bob("Bob");
	ClapTrap lucas("lucas");
	ClapTrap lol;
	bob.attack("lucas");
	for (int i = 0; i < 11; i++) {
		bob.beRepaired(1);
	}
	return 0;
}
