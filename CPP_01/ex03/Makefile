# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/03 17:12:29 by nfoughal          #+#    #+#              #
#    Updated: 2023/08/03 22:09:44 by nfoughal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = UnViolence
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =  main.cpp  Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

${NAME}: $(OBJ)
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o:%.cpp   Weapon.hpp HumanA.hpp HumanB.hpp
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re : fclean all
.PHONY: all clean fclean re