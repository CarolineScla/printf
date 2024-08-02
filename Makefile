# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csclavon <csclavon@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 11:32:17 by csclavon          #+#    #+#              #
#    Updated: 2024/05/29 12:10:10 by csclavon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILE =  printf.c \
		parser.c \
		ft_strchr.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_puthex.c \
		ft_putunbr.c \
		ft_putptr.c \

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I.

OBJS = ${FILE:.c=.o}

RM = rm -f

LIBC = ar rc

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
	@printf "compiling $<          \r"

${NAME}:	${OBJS}
			@echo "\n\033[95mdone!\033[0m"
			@${LIBC} ${NAME} ${OBJS}
			ranlib ${NAME}

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

all: ${NAME}

re: fclean all

.PHONY: clean fclean all re
