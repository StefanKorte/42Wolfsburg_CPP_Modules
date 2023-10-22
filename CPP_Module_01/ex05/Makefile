# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/04 23:33:53 by skorte            #+#    #+#              #
#    Updated: 2022/08/06 00:37:28 by skorte           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl_2.0

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = 	main.cpp \
			Harl.cpp

OBJECTS =$(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

$(OBJECTS):$(SOURCES)
	$(CC) $(CFLAGS) -c $(SOURCES)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re
