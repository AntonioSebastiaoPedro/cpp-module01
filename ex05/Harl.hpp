/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 00:19:02 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/19 08:58:23 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL
# define HARL

# include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Harl();
		typedef void (Harl::*ComplainFunction)();
		void complain( std::string level );
};

# endif