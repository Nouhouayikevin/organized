##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## for the setting up
##

NAME = organized
TEMP = *~
SRC	= $(wildcard *.c)
OBJ	= $(SRC .c = .o)

all:$(OBJ)
	gcc  $(SRC) libshell.a -g3 -o $(NAME)
clean:
	rm -f $(OBJ)
	rm $(NAME)
fclean: clean
re: fclean all
