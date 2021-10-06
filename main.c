#include "libft.h"
#include "ft_printf.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFF_SIZE 4096
#define SPACE ' '

static int	ft_error(int error, char *str)
{
	if (error == 1)
		ft_printf("Convert: not a valid file: %s\n", str);
	if (error == 2)
	{
		ft_printf("Convert: invalid file\n");
		exit (-1);
	}
	return (-1);
}

static int	ft_binary_to_int(char *binary)
{
	int res = 0;
	int	i = 0;
	int	add = 128;

	while (binary[i])
	{
		if (binary[i] == '1')
			res += add;
		add /= 2;
		i++;
	}
	return (res);
}

static int	ft_check_input(char **characters)
{
	int i = 0;
	int ii = 0;
	while (characters[i])
	{
		if (ft_strlen(characters[i]) != 8)
			return (-1);
		while (characters[i][ii])
		{
			if (characters[i][ii] != '0' && characters[i][ii] != '1')
				return (-1);
			ii++;
		}
		i++;
		ii = 0;
	}
	return (0);
}

static void	ft_convert(char *buf)
{
	char **characters = NULL;
	int word_count = 0;
	int i = 0;
	
	word_count =ft_wordcount(buf, SPACE);
	characters = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!characters)
		exit (-1);
	characters = ft_strsplit(buf, SPACE);
	if (ft_check_input(characters) == -1)
		ft_error(2, NULL);
	while (characters[i])
		ft_putchar(ft_binary_to_int(characters[i++]));
	ft_free_array(&characters);
}

int main(int argc, char **argv)
{
	char	buf[BUFF_SIZE + 1];

	if (argc == 2)
	{
		int fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (ft_error(1, argv[1]));
		read(fd, &buf, BUFF_SIZE);
		ft_convert(buf);
		close(fd);
		write(1, "\n", 1);
	}
	ft_putstr("Usage: ./converter <file containing 8-bit binary numbers separated by spaces>\n");
	return (0);
}
