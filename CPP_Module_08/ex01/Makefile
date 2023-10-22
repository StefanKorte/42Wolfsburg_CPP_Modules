# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/25 15:19:02 by skorte            #+#    #+#              #
#    Updated: 2022/08/25 17:17:00 by skorte           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME =  span

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

SOURCES = 	main.cpp \
			Span.cpp

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
