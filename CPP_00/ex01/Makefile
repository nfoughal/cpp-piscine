# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/29 15:17:18 by nfoughal          #+#    #+#              #
#    Updated: 2023/07/29 15:17:19 by nfoughal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook
CC = c++
CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp Contact.cpp PhoneBook.cpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o:%.cpp PhoneBook.hpp Contact.hpp
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re

