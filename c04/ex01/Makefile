# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 13:24:47 by imaalem           #+#    #+#              #
#    Updated: 2022/12/27 21:51:16 by imaalem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	je_ne_veux_pas_bruler_le_monde

SRCS	=	main.cpp \
			Cat.cpp \
			Dog.cpp \
			Animal.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \
			Brain.cpp

OBJS	=	${SRCS:.cpp=.o}

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98
 
RM		=	rm -rf

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

.cpp.o:
			${CC} ${CFLAGS} -c $< -o ${<:cpp=o}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: 	all clean fclean re