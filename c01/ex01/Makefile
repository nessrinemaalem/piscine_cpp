# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/23 16:19:04 by imaalem           #+#    #+#              #
#    Updated: 2022/07/29 14:41:58 by imaalem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Moar_brainz

SRCS	=	main.cpp \
			Zombie.cpp \
			zombieHorde.cpp \

OBJS	=	${SRCS:.cpp=.o}

CC		=	clang++

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