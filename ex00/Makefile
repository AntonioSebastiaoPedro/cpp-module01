# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/16 09:55:50 by ansebast          #+#    #+#              #
#    Updated: 2025/03/16 15:14:26 by ansebast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
SRC = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
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