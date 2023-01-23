##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## built library ,
## implement the clean, fclean, re rule.
##

SRC	=	get_size_file.c \
		html.c	\
		main.c	\
		ppm.c \
		recup_file.c \
		verif_input.c	\


CFLAGS	=	-g3 -g -Wall -Wextra -fanalyzer -I ./include -lm -O2

OBJ	=	$(SRC:.c=.o)

NAME	=	antman

all: 	$(NAME)

lib:
	make -C ../lib/my/

$(NAME):	$(OBJ)
	make -C ../lib/my/
	gcc -o $(NAME) $(OBJ) $(CFLAGS) -L ../lib/my -lmy

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	make fclean -C ../lib/my/

re:	fclean all
