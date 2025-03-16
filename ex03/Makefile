# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/16 16:59:39 by ansebast          #+#    #+#              #
#    Updated: 2025/03/16 17:41:03 by ansebast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon
FLAGS =	-Wall -Wextra -Werror -g --std=c++98
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all