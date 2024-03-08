# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jimenapastranajessel <jimenapastranajes    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/29 14:40:18 by jpastran          #+#    #+#              #
#    Updated: 2024/03/08 17:21:43 by jimenapastr      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := cc
FLAGS := -Wall -Wextra -Werror
RM := rm -f

NAME := libftprintf.a

SRCS := ft_printf.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putptr.c \
		ft_putstr.c \

OBJS := $(SRCS:.c=.o)

LIBFT = ../libft.a
LIBFT_INC := -I./libft
LIBFT_LINK := -L./libft -lft

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft
	ar -rcs $(NAME) $(OBJS) $(LIBFT)

.c.o:
	$(CC) &(FLAGS) $(LIBFT_INC) -c $< -o $(<:.c=.o)

clean:
	$(RM) $(NAME) $(OBJS)
	make -C libft clean

fclean: clean
	$(RM) $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re



