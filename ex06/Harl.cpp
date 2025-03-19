/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 00:19:06 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/19 07:34:41 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl() {}

void Harl::debug( void )
{
	std::cout << BLUE << "[ DEBUG ]\n" << RESET;
	std::cout << "Checking for memory leaks in the MiniRT project...\n";
	std::cout << std::endl;
}

void Harl::info( void )
{
	std::cout << GREEN << "[ INFO ]\n" << RESET;
	std::cout << "FdF project compiled successfully!\n";
	std::cout << "Run ./FdF to view the map.\n";
	std::cout << std::endl;
}

void Harl::warning( void )
{
	std::cout << YELLOW << "[ WARNING ]\n" << RESET;
	std::cout << "The 42 rule discourages the use of global variables!\n";
	std::cout << "Consider refactoring your code.\n";
	std::cout << std::endl;
}

void Harl::error( void )
{
	std::cout << RED << "[ INFO ]\n" << RESET;
	std::cout << "Segmentation fault!\n";
	std::cout << "Try using valgrind to identify the problem.\n";
	std::cout << std::endl;
}

void Harl::switch_off( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]\n";
}

void Harl::complain( int level )
{
	ComplainFunction ptr;
	
	switch (level)
	{
	case DEBUG:
		ptr = &Harl::debug;
		(this->*ptr)();
	case INFO:
		ptr = &Harl::info;
		(this->*ptr)();
	case WARNING:
		ptr = &Harl::warning;
		(this->*ptr)();
	case ERROR:
		ptr = &Harl::error;
		(this->*ptr)();
		break;
	default:
		ptr = &Harl::switch_off;
		(this->*ptr)();
		break;
	}
}
