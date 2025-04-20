# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 19:01:19 by nfoughal          #+#    #+#              #
#    Updated: 2023/09/17 14:51:59 by nfoughal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = EasyFind
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =  main.cpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

${NAME}: $(OBJ)
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o:%.cpp  easyfind.hpp
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re : fclean all
.PHONY: all clean fclean re