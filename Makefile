# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/15 16:40:33 by kmarczyn          #+#    #+#              #
#    Updated: 2024/05/15 18:50:20 by kmarczyn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ./Src/ft_printf.c \

OBJS = $(SRC:.c=.o)
CC = CC
CCFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
fclean:
	$(RM) $(NAME)
re:
	fclean all
.PHONY:
	all clean fclean re