##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## built library ,
## implement the clean, fclean, re rule.
##

SRC	=	$(wildcard antman/*.c)	\
		$(wildcard giantman/*.c)

CFLAGS	=	-g3 -g -Wall -Wextra -fanalyzer -I ./include -lm

OBJ	=	$(SRC:.c=.o)

NAME	=	make_all

all:
	@make -C antman/
	@make -C giantman/

lib:
	make -C lib/my/

$(NAME):	$(OBJ)
	@make -C lib/my/
	@gcc -o $(NAME) $(OBJ) $(CFLAGS) -L./lib/my -lmy

clean:
	make clean -C antman/
	make clean -C giantman/
	make clean -C lib/my/

fclean: clean
	make fclean -C antman/
	make fclean -C giantman/

re:	fclean all
