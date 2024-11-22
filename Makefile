# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/22 15:13:25 by yel-bouk          #+#    #+#              #
#    Updated: 2024/11/22 16:08:36 by yel-bouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a
EXEC = a.out
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
RM = rm -f

SRCS = ./srcs/libftprintf.c \
		./srcs/number.c \
		./tests/main.c
		
OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

$(EXEC): $(NAME) ./srcs/main.c
	$(CC) $(CFLAGS) -o $(EXEC) ./srcs/main.c $(NAME)


clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME) $(EXEC)

re:			fclean all

.PHONY:		all clean fclean re