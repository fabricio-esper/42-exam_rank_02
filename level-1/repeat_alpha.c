#include <unistd.h>

static void	repeat_alpha(char c)
{
	int	repeat;
	int	i;

	repeat = 0;
	if (c >= 'a' && c <= 'z')
	{
		repeat = c - 96;
		i = -1;
		while (++i != repeat)
			write(1, &c, 1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		repeat = c - 64;
		i = -1;
		while (++i != repeat)
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
		i = -1;
		while (argv[1][++i])
			repeat_alpha(argv[1][i]);
	}
	write(1, "\n", 1);
	return (0);
}
