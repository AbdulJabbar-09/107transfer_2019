##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRC	=	lib/107transfer.cpp

OBJ =	$(SRC:.c=.o)

NAME =	107transfer

all: $(NAME)

$(NAME): $(OBJ)
	g++ -o $(NAME) $(SRC)

clean:
	rm -f *~

fclean: clean
	rm -f $(NAME)

re:	fclean all
