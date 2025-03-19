/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 00:19:02 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/19 02:29:53 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL
# define HARL

# include <iostream>

# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"

# define DEBUG 0
# define INFO 1
# define WARNING 2
# define ERROR 3

class Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void switch_off( void );
	public:
		Harl();
		typedef void (Harl::*ComplainFunction)();
		void complain( int level );
};

# endif