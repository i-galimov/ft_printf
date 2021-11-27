NAME	=	libftprintf.a

SRCS	=	ft_putchar.c	ft_putnbr.c		ft_putstr.c 	ft_lower_hexadecimal.c\
			ft_printf.c		ft_putpointer.c	ft_putplusnbr.c	ft_upper_hexadecimal.c\
			ft_putstr.c		ft_putpointer.c
HEADER	=	ft_printf.h
OBJ		=	$(SRCS:%.c=%.o)

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

.PHONY	:	all clean fclean re bonus

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	@rm -f $(OBJ)

fclean	:	clean
	@$(RM) $(NAME)

re		:	fclean all
