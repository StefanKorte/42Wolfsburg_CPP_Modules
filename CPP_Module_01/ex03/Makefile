# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/26 13:50:46 by skorte            #+#    #+#              #
#    Updated: 2022/08/04 00:57:53 by skorte           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Unnecessary_violence

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES =	Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp \
			main.cpp

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
