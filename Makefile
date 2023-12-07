NAME = libftprintf.a

RM = rm -rf

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_char_str.c \
		ft_hex.c	\
		ft_printf.c	\
		ft_putnbr.c	\

OBJS = $(SRC:.c=.o)

INCLUDE = ft_printf.h

all : $(NAME)

$(NAME) : $(OBJS)	$(INCLUDE)
			ar -rcs $(NAME) $(OBJS) $(INCLUDE)

clean :
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

re : fclean all
