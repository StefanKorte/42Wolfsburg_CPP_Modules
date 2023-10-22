# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/04 23:33:53 by skorte            #+#    #+#              #
#    Updated: 2022/08/07 00:15:37 by skorte           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Is_in_triangle?

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = 	main.cpp \
			Fixed.cpp \
			Point.cpp \
			bsp.cpp

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
