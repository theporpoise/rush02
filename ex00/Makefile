# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgould <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 14:05:57 by mgould            #+#    #+#              #
#    Updated: 2016/11/13 19:19:04 by mgould           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = ft_list.h
FLAG = -Wall -Wextra -Werror
OPTION = -I $(HEADER)
O = srcs/
SRC = main.c $(O)ft_putchar.c $(O)ft_putstr.c $(O)ft_strcmp.c $(O)ft_strlen.c \
	$(O)rush00.c $(O)rush01.c $(O)rush02.c $(O)rush03.c $(O)rush04.c \
	$(O)ft_putnbr.c
DEST = -o rush-2

all:
	gcc $(FLAG) $(OPTION) $(SRC) $(DEST)

clean:

fclean: clean
	rm -fr rush-2

re: fclean all
