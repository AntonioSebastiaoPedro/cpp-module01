/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 17:01:04 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/16 17:25:52 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon( void ) {}

Weapon::Weapon( std::string type ) : type(type) {}

std::string& Weapon::getType( void )
{
	return ( this->type );
}

void Weapon::setType( std::string type )
{
	this->type = type;
}
