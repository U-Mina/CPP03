# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/12 19:55:35 by ewu               #+#    #+#              #
#    Updated: 2025/02/12 19:56:39 by ewu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ClapTrap
C++		= c++
CFLAG	= -Wall -Wextra -Werror -std=c++98
SRC		= main.cpp ClapTrap.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(CFLAG) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re