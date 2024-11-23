# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/22 15:13:25 by yel-bouk          #+#    #+#              #
#    Updated: 2024/11/23 18:02:30 by yel-bouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a
EXEC = a.out
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
RM = rm -f

SRCS = srcs/ftprintf.c srcs/letters.c srcs/number.c
OBJS	= $(SRCS:.c=.o)

TEST_SRCS = ./tests/main.c
TEST_OBJS = $(TEST_SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

$(EXEC): $(NAME) ./tests/main.c
	$(CC) $(CFLAGS) -o $(EXEC) ./tests/main.c $(NAME)


clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME) $(EXEC)

re:			fclean all

.PHONY:		all clean fclean re