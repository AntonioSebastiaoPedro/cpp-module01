# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/19 00:17:27 by ansebast          #+#    #+#              #
#    Updated: 2025/03/19 01:09:37 by ansebast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl
FLAGS = -Wall -Wextra -Werror -g --std=c++98
SRC = main.cpp Harl.cpp
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re : fclean all