/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 10:27:12 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/16 15:11:46 by ansebast         ###   ########.fr       */
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
		Zombie( std::string name );
		void announce( void );
		~Zombie();
};
	
void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

# endif