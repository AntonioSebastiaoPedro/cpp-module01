/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 17:01:00 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/16 17:43:07 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA
# define HUMANA

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
	private:
		std::string name;
		Weapon& weapon;
	
	public:
		HumanA( std::string name, Weapon& weapon );
		void attack( void );
};

# endif