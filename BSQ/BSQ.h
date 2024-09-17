#ifndef __FT_BSQ_H__
# define __FT_BSQ_H__
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>

void        ft_putchar(char c);
char        *sh_stdin();
void        ft_putstr(char *str);
int         ft_get_number_lines(char *argv);
char        ft_get_char_void(char *argv);
char        ft_get_char_obst(char *argv);
char        ft_get_char_full(char *argv);
int         ft_get_number_columns(char *argv);
char        **ft_read_file(char *argv);
void        ft_get_second_line(int fd);
int         ft_verif_chars(char *argv);
int         ft_verif_columns(char *argv);
int         ft_verif_returns(char *argv);
int         ft_verif_map(char *argv);
int         ft_get_next_columns(char *argv, int fd);
int         ft_size_file(char *argv);
int         ft_min(int a, int b, int c);
int         **ft_generate_map(int l, int c);
int         ft_biggest_square(char **map, int c, int l, char o);
int         ft_find_position_square(char **map, int c, int l, char o);
char        **ft_fill_map(char **map, int c, int l, char o, char p);

#endif

