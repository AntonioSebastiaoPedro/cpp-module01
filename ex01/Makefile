# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/16 09:55:50 by ansebast          #+#    #+#              #
#    Updated: 2025/03/16 16:37:17 by ansebast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = horde
SRC = Zombie.cpp zombieHorde.cpp main.cpp
OBJS = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror --std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all