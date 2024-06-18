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
#nazwa naszej biblioteki

SRCS	= ./Src/ft_printf.c \
	   	./Src/ft_numbers.c \
		./Src/ft_words.c \
#nazwa oraz pliki źródło

OBJS = $(SRC:.c=.o)
#nazwa oraz przypisanie każdego pliku ze źródła z rozszerzenia .c na .o
CC = gcc
CCFLAGS = -Wall -Wextra -Werror
RM = rm -f
#przypisanie zmiennych

all: $(NAME)
#komenda wykonawcza do wszystkich plików tworząc biblioteke

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)
#komenda zbierająca już zamienione pliki i tworząca z nich biblioteke
#ar - narzędzoe tworzące, rcs - replace create index, jest to opckaj naszego narzędzia

#komendy do make jak usunięcie itd
clean:
	$(RM) $(OBJS)
fclean:
	$(RM) $(NAME)
re:
	fclean all
.PHONY:
	all clean fclean re