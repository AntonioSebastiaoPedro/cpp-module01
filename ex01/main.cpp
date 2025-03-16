/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 10:43:38 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/16 16:07:24 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main( void )
{
	Zombie* hordes;
	int number = 10;
	
	hordes = zombieHorde(number, "Ansebast");
	for (int i = 0; i < number; i++)
		hordes[i].announce();
	
	delete[] hordes;
	return (0);
}
