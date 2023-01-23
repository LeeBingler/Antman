##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## copy the built library into lib/,
## copy the my.h into include/,
## implement the clean rule.
##

SRC	=	free.c	\
		free_char_arr_size.c	\
		len_int.c	\
		mini_printf.c	\
		my_calloc.c	\
		my_compute_power_rec.c	\
		my_compute_square_root.c	\
		my_find_prime_sup.c	\
		my_getnbr.c	\
		my_is_prime.c	\
		my_isneg.c	\
		my_put_nbr.c	\
		my_putchar.c	\
		my_putnbr_base.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_showmen.c	\
		my_showstr.c	\
		my_sort_int_array.c	\
		my_str_isalpha.c	\
		my_str_isfloat.c	\
		my_str_islower.c	\
		my_str_isnum.c		\
		my_str_isprintable.c	 \
		my_str_isupper.c	\
		my_str_isnum.c		\
		my_strcapitalize.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_strdup.c	\
		my_strlen.c	\
		my_strlowcase.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		my_strstr.c	\
		my_strupcase.c	\
		my_swap.c	\
		puissance.c	\
		return_base.c	\


CFLAGS	=	-g3 -Wall -Wextra -g -fanalyzer

OBJ	=	$(SRC:.c=.o)

NAME	=	lib

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm libmy.a

re:	fclean all
