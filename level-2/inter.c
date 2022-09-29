#include <unistd.h>

int		iter(char *str, char c, int len)
{
	int	i;

	i = 0;
	while (str[i] && (i < len || len == -1))
		if (str[i++] == c)
			return (1);
	return (0);
}

void	inter(char *charset, char *str)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (!iter(charset, charset[i], i) && iter(str, charset[i], -1))
			write(1, &charset[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
