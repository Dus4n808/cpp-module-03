/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 16:11:58 by dufama            #+#    #+#             */
/*   Updated: 2026/03/30 18:13:06 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "../headers/ClapTrap.hpp"


class FragTrap : virtual public ClapTrap {
		public:
		//constructor
			FragTrap();
			FragTrap(std::string const &name);
		//copy
			FragTrap(const FragTrap &copy);
		//assign
			FragTrap &operator=(const FragTrap &assign);
		//destructor
			~FragTrap();

		//func member
			void highFivesGuys(void);
			void sayName(void);
};

#endif
