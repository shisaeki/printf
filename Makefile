# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shisaeki <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/30 14:32:43 by shisaeki          #+#    #+#              #
#    Updated: 2023/05/30 16:44:44 by shisaeki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf

SRCS = main.c \
		ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \

INCLUDES=ft_printf.h \

all: $(NAME)

$(NAME):
	cc -o $(NAME) -I $(INCLUDES) $(SRCS)
clean:
	rm -f libftprintf
re: clean all
