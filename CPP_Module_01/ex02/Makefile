# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/26 13:47:47 by skorte            #+#    #+#              #
#    Updated: 2022/07/26 13:48:58 by skorte           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ThisIsBrain

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = 	main.cpp 

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
