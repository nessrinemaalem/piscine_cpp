# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/30 18:00:57 by imaalem           #+#    #+#              #
#    Updated: 2022/07/30 18:01:05 by imaalem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	mon_premier_canon

SRCS	=	main.cpp \
			Fixed.cpp \

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