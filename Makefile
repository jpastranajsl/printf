# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpastran <jpastran@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/29 14:40:18 by jpastran          #+#    #+#              #
#    Updated: 2024/02/29 15:25:48 by jpastran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := clang
FLAGS := -Wall -Wextra -Werror
RM := rm -f

NAME := libftprintf.a

SRCS := ft_printf.c \
		ft_putptr.c

OBJS := $(SRCS:.c=.o)

LIBFT = ./libft/libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

.c.o:
	$(CC) &(FLAGS) -c $< -o $(<:.c=.o)

clean:
	$(RM) $(NAME)

fclean:
	$(RM) $(NAME) $(OBJS)

.PHONY: all clean fclean re

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

