/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:45:21 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/19 00:01:59 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SED
# define SED

# include <iostream>

bool		validate_args(int ac, char **av);
std::string 	str_replace(std::string line, std::string str1, std::string str2);

# endif