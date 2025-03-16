/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 17:00:57 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/16 18:04:58 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name) {}

void HumanB::setWeapon( Weapon& arm )
{
	this->weapon = &arm;
}

void HumanB::attack( void )
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
