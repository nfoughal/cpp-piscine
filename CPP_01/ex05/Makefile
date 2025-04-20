# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/05 15:05:12 by nfoughal          #+#    #+#              #
#    Updated: 2023/08/05 15:06:21 by nfoughal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl 
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =  main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

${NAME}: $(OBJ)
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o:%.cpp   Harl.hpp
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re : fclean all
.PHONY: all clean fclean re