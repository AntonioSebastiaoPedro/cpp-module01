/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 10:34:06 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/16 15:14:54 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : name(name) {}

void Zombie::announce( void )
{
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
	std::cout << this->name << std::endl;
}
