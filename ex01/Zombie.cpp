/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 10:34:06 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/16 16:01:56 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {}

Zombie::Zombie( std::string name ) : name(name) {}

void Zombie::announce( void )
{
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName( std::string name )
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this->name << std::endl;
}
