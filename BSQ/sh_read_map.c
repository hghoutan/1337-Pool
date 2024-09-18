#include "sh_bsq.h"

int	ft_size_file(char *argv)
{
	int		size;
	char	buf;
	int		fd;

	size = 0;
	fd = open(argv, O_RDONLY);
	while (read(fd, &buf, 1))
	{
		size++;
	}
	close(fd);
	return (size);
}

int	ft_get_number_lines(char *argv)
{
	int		i;
	char	*buf;
	int		nb_l;
	int		fd;

	i = 0;
	nb_l = 0;
	fd = open(argv, O_RDONLY);
	buf = malloc(80 * sizeof(char));
	if (buf == NULL)
		return (0);
	while (read(fd, &buf[i], 1))
	{
		if (buf[i] > 58 || buf[i] < 47)
			break ;
		nb_l = nb_l * 10 + (buf[i] - 48);
		i++;
	}
	free(buf);
	close(fd);
	return (nb_l);
}

int	ft_get_number_columns(char *argv)
{
	char	*buf;
	int		j;
	int		size_file;
	int		fd;

	j = 0;
	fd = open(argv, O_RDONLY);
	size_file = ft_size_file(argv);
	ft_get_second_line(fd);
	buf = malloc(size_file * sizeof(char));
	if (buf == NULL)
		return (0);
	while (read(fd, &buf[j], 1))
	{
		if (buf[j] == '\n')
			break ;
		j++;
	}
	free(buf);
	close(fd);
	return (j + 1);
}

void	ft_get_second_line(int fd)
{
	int		i;
	char	*buf;

	i = 0;
	buf = malloc(4096 * sizeof(char));
	if (buf == NULL)
		return ;
	while (read(fd, &buf[i], 1))
	{
		if (buf[i] == '\n')
			break ;
		i++;
	}
}

char **ft_read_file(char *argv) {
    char **buf;
    int lines;
    int columns;
    int fd;

    columns = ft_get_number_columns(argv);
    lines = ft_get_number_lines(argv);
    fd = open(argv, O_RDONLY);
    
    if (fd < 0) {
        return NULL; // Handle file open error
    }

    ft_get_second_line(fd);
    buf = allocate_buffer(lines, columns);
    
    if (buf == NULL) {
        close(fd);
        return NULL; // Handle memory allocation error
    }

    if (read_lines(fd, buf, lines, columns) == -1) {
        free_buffer(buf, lines);
        close(fd);
        return NULL; // Handle read error
    }

    close(fd);
    return buf;
}

char **allocate_buffer(int lines, int columns) {
    char **buf = malloc(lines * sizeof(char *));
    
    if (buf == NULL) {
        return NULL; // Handle memory allocation error
    }

    for (int i = 0; i < lines; i++) {
        buf[i] = malloc(columns * sizeof(char));
        if (buf[i] == NULL) {
            free_buffer(buf, i); // Free already allocated lines
            return NULL; // Handle memory allocation error
        }
    }

    return buf;
}

int read_lines(int fd, char **buf, int lines, int columns) {
    for (int i = 0; i < lines; i++) {
        if (read(fd, buf[i], columns) == -1) {
            return -1; // Read error
        }
        buf[i][columns - 1] = '\0'; // Null-terminate the string
    }
    return 0; // Success
}

void free_buffer(char **buf, int lines) {
    for (int i = 0; i < lines; i++) {
        free(buf[i]);
    }
    free(buf);
}

