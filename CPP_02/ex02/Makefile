# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/10 11:18:45 by nfoughal          #+#    #+#              #
#    Updated: 2023/08/10 11:19:01 by nfoughal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed2
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =  main.cpp Fixed.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

${NAME}: $(OBJ)
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o:%.cpp  Fixed.hpp
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re : fclean all
.PHONY: all clean fclean re