# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/16 18:10:00 by ansebast          #+#    #+#              #
#    Updated: 2025/03/19 00:18:05 by ansebast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed
FLAGS = -Wall -Wextra -Werror -g --std=c++98
SRC = main.cpp utils.cpp
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re : fclean all