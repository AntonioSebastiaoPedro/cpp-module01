/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 01:07:49 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/19 09:36:13 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int	main( void )
{
	Harl obj;

	obj.complain("DEBUG");
	std::cout << std::endl;
	obj.complain("INFO");
	std::cout << std::endl;
	obj.complain("WARNING");
	std::cout << std::endl;
	obj.complain("ERROR");
	return (0);
}
