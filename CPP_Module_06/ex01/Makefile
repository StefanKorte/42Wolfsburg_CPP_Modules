# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/04 23:33:53 by skorte            #+#    #+#              #
#    Updated: 2022/08/22 17:06:09 by skorte           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Serialization

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

SOURCES = 	main.cpp \
			Data.cpp \
			Serialize.cpp

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
