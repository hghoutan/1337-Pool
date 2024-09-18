CFLAGS = -Wall -Wextra -Werror
AR=ar crs
FILES 	= srcs/ft_putchar srcs/ft_strcmp \
		  srcs/ft_putstr srcs/ft_swap srcs/ft_strlen
SRC		= $(FILES:=.c)
OBJ		= $(FILES:=.o)
LIB = libft.a

all: $(LIB)

$(LIB) : $(OBJ)
	$(AR) 
%.o: %.c
	cc $(CFLAGS) -c $< -o $@

re:
clean:
	rm -rf *.o
fclean: clean
	rm -rf $(LIB)
