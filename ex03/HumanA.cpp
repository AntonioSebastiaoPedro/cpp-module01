/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 17:00:55 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/16 17:43:15 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : name(name), weapon(weapon) {}

void HumanA::attack( void )
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
