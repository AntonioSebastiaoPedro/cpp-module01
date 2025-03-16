/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 10:27:12 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/16 16:01:02 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE
# define ZOMBIE

# include <iostream>
class Zombie
{
	private:
		std::string name;
		
	public:
		Zombie( void );
		Zombie( std::string name );
		void announce( void );
		~Zombie( void );
		void setName( std::string name );
};
	
void	randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

# endif