# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 13:24:47 by imaalem           #+#    #+#              #
#    Updated: 2023/01/12 18:01:42 by imaalem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Cest_toujours_mieux_que_dapporter_le_café

SRCS	=	main.cpp \
			Bureaucrat.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \
			Intern.cpp \
			Form.cpp


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