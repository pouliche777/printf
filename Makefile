# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slord <slord@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/27 11:48:26 by slord             #+#    #+#              #
#    Updated: 2022/05/09 14:03:00 by slord            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = ft_printf.c ft_char.c ft_classe.c ft_putchar.c ft_string.c ft_strlen.c ft_putstr.c ft_putnb.c ft_int.c \
ft_unsigned.c ft_putunsigned.c ft_hexamin.c ft_puthexa.c ft_hexamaj.c ft_count_digits.c ft_pointv.c ft_count_digits_p.c

OBJS = $(SOURCES:.c=.o)

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

$(NAME):	$(OBJS)
					ar rcs $(NAME) $(OBJS)

all : $(NAME)
compile: 
			$(CC) $(CFLAGS) $(SOURCES)
clean: 
					$(RM) $(OBJS)
fclean:		clean
					$(RM) $(NAME)
re:			fclean $(NAME)
