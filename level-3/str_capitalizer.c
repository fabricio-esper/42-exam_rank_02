#include <unistd.h>

void	str_capitalizer(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	i = -1;
	while (str[++i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == ' ') || (str[0] >= 'a' && str[0] <= 'z'))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
}

int	main(int argc, char **argv)
{
	int	i;
	if (argc > 1)
	{
		i = 1;
		argc--;
		while (argc--)
		{
			str_capitalizer(argv[i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
