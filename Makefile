# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shisaeki <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/30 14:32:43 by shisaeki          #+#    #+#              #
#    Updated: 2023/06/03 13:37:20 by shisaeki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf

SRCS = main.c \
		ft_printf.c \
		ft_print_char.c \
		ft_print_str.c \
		ft_print_nbr.c \
		ft_print_unbr.c \
		ft_print_hex.c \
		ft_print_ptr.c \

INCLUDES=ft_printf.h \

all: $(NAME)

$(NAME):
	cc -o $(NAME) -I $(INCLUDES) $(SRCS)
clean:
	rm -f libftprintf
re: clean all
