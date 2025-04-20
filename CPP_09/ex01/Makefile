# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 16:07:58 by nfoughal          #+#    #+#              #
#    Updated: 2023/09/22 17:52:18 by nfoughal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN
CC = c++
CFLAGS =  -Wall -Wextra -Werror -std=c++98

SRC =  main.cpp RPN.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

${NAME}: $(OBJ)
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o:%.cpp  RPN.hpp
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re : fclean all
.PHONY: all clean fclean re