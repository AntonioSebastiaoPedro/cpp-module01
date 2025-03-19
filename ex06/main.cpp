/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 01:07:49 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/19 02:28:38 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int	main( int ac, char **av )
{
	Harl obj;
	if (ac != 2)
	{
		std::cerr << "Usage: ./harlFilter <LEVEL>";
		return (1);
	}
	obj.complain(4);
	return (0);
}
