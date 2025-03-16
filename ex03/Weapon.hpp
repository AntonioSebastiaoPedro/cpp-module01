/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 17:01:07 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/16 17:25:20 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON
# define WEAPON

# include <iostream>

class Weapon
{
	private:
		std::string type;
		
	public:
		Weapon( void );
		Weapon( std::string type );
		std::string& getType( void );
		void setType( std::string type );
};

# endif