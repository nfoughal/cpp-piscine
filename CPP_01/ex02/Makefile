# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/03 14:49:17 by nfoughal          #+#    #+#              #
#    Updated: 2023/08/03 14:49:18 by nfoughal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = string
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =  main.cpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

${NAME}: $(OBJ)
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re : fclean all
.PHONY: all clean fclean re