##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile
##

NAME = cesar

SRC = ./src/main.c 		\
	  ./src/fonction.c 	\
	  ./src/fake_main.c \
	  ./src/basics.c \
	  ./src/basics2.c \
	  ./src/write_file.c 	\

OBJ = $(SRC:.c=.o)
CC=gcc

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME) -I../includes

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME) $(OBJ)

re:
	make fclean
	make
