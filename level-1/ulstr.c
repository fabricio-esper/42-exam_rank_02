#include <unistd.h>

static void	ulstr(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
		write(1, &c, 1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		c += 32;
		write(1, &c, 1);
	}
	else
		write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			ulstr(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
