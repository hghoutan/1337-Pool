NAME = bsq

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = main.c sh_find_solution.c sh_verif_map.c sh_read_map.c sh_print.c sh_get_chars.c sh_stdin.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

