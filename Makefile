# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 16:55:44 by anrechai          #+#    #+#              #
#    Updated: 2022/05/27 23:46:08 by anrechai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_algo.c ft_free.c ft_initialize.c ft_move_2.c ft_move.c ft_move_list_2.c ft_move_list.c ft_parsing_2.c ft_parsing.c ft_pb_100.c ft_pb_500_2.c ft_pb_500.c ft_sort_100.c ft_sort_3_4_5.c ft_sort_500_2.c ft_sort_500.c ft_split.c ft_str.c main.c

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
