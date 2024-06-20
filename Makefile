# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/15 16:40:33 by kmarczyn          #+#    #+#              #
#    Updated: 2024/06/20 15:40:54 by kmarczyn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libftprintf.a
LIBFT= libft.a
OBJ= $(SRC:%.c=%.o)

CC= cc
CFLAGS= -Wall -Wextra -Werror
LIBTFSRC= ./libft

SRC= ft_printf.c print_char.c print_string.c print_hex.c print_number.c \
print_unsigned.c print_pointer.c


%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): libft $(OBJ)
	ar rcs $(NAME) $(OBJ)

libft:
	@make -C $(LIBTFSRC)
	@cp $(LIBTFSRC)/$(LIBFT) .
	@mv $(LIBFT) $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all libft clean fclean re

