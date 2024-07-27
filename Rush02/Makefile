# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/27 10:51:30 by bpiovano          #+#    #+#              #
#    Updated: 2024/07/27 14:44:32 by bpiovano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES	= srcs/NAMEOFOURFILES
OBJECTS	= ${SOURCES:.c=.o}
INCLUDES	= FILES
NAME	= rush-02
CC	= cc
RM	= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDES}

${NAME}:	${OBJECTS}
			gcc -o ${NAME} ${OBJECTS} ${CFLAGS}

all: ${NAME}

clean:
	${RM} ${OBJECTS}

fclean: clean
	${RM} ${NAME}

re: fclean all

norm :
	norminette -R CheckForbiddenSourceHeader */*.[ch]

.PHONY: all clean fclean re .c.o norm
