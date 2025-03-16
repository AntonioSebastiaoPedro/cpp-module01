/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 10:43:38 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/16 15:13:29 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main( void )
{
	Zombie *person1;
	
	person1 = newZombie("Foo");
	person1->announce();
	
	randomChump("Zig");
	
	delete person1;
	return (0);
}
