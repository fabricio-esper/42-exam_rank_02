#include <unistd.h>

static void	alphaloop(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		c++;
		if (c > 'z')
			c = 'a';
		else if (c > 'Z' && c < 'a')
			c = 'A';
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
			alphaloop(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
