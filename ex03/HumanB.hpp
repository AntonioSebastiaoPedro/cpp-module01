/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 17:01:02 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/16 18:05:04 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB
# define HUMANB

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon* weapon;
	
	public:
		HumanB( std::string name );
		void setWeapon( Weapon& arm );
		void attack( void );
};

# endif