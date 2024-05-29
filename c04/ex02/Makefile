# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 13:24:47 by imaalem           #+#    #+#              #
#    Updated: 2022/12/29 18:42:58 by imaalem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	classe_abstraite

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