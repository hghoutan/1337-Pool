/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <hghoutan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:09:13 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/17 21:12:47 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SH_BSQ_H
# define SH_BSQ_H
# include <errno.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

typedef struct s_BSQ_Map
{
	char	**map;
	int		l;
	int		c;
	char	o;
	char	p;
}			t_BSQ_Map;

void		ft_putchar(char c);
char		*sh_stdin(void);
void		ft_putstr(char *str);
int			ft_get_number_lines(char *argv);
char		ft_get_char_void(char *argv);
char		ft_get_char_obst(char *argv);
char		ft_get_char_full(char *argv);
int			ft_get_number_columns(char *argv);
char		**ft_read_file(char *argv);
void		ft_get_second_line(int fd);
int			ft_verif_chars(char *argv);
int			ft_verif_columns(char *argv);
int			ft_verif_returns(char *argv);
int			ft_verif_map(char *argv);
int			ft_get_next_columns(char *argv, int fd);
int			ft_size_file(char *argv);
int			ft_min(int a, int b, int c);
int			**ft_generate_map(int l, int c);
int			ft_biggest_square(t_BSQ_Map map);
int			ft_find_position_square(t_BSQ_Map map);
char		**ft_fill_map(t_BSQ_Map map);

#endif