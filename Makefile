# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 16:55:44 by anrechai          #+#    #+#              #
#    Updated: 2022/05/19 19:00:09 by anrechai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	parsing.c utils.c utils2.c utils3.c main.c ft_moove.c ft_moove_2.c ft_moove_3.c

OBJS		=	${SRCS:.c=.o}

NAME		=	push_swap

CFLAGS		=	-Wall -Wextra -Werror

CC			=	cc

HEADER		=	push_swap.h

.c.o:
			$(CC) $(CFLAGS) -c $< -o $@ -I./

$(NAME):	${OBJS}
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -L.

all:		$(NAME)

clean:
			rm -f ${OBJS}
			@echo "\033[92mstatus $@ is [OK]\033[0m"

fclean:		clean
			rm -f ${NAME}
			@echo "\033[92mstatus $@ [OK]\033[0m"

re:			fclean all

.PHONY:		fclean clean re all
