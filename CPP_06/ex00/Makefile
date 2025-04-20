# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 17:30:33 by nfoughal          #+#    #+#              #
#    Updated: 2023/09/12 17:49:46 by nfoughal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =  main.cpp ScalarConverter.cpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

${NAME}: $(OBJ)
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o:%.cpp  ScalarConverter.hpp
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re : fclean all
.PHONY: all clean fclean re