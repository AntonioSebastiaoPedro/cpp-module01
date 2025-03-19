/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 00:19:02 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/19 01:45:29 by ansebast         ###   ########.fr       */
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
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define BOLD    "\033[1m"
#define UNDERLINE "\033[4m"

class Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		std::string level;
	public:
		Harl();
		typedef void (Harl::*ComplainFunction)();
		void complain( std::string level );
};

# endif