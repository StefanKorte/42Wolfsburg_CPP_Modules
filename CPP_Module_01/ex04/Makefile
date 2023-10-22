# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/26 13:50:46 by skorte            #+#    #+#              #
#    Updated: 2022/08/04 23:15:27 by skorte           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sed_is_for_losers

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = main.cpp

OBJECTS =$(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re
