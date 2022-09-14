#include <unistd.h>

void	expand_str(char *str)
{
	int	i;
	int	firstwrd;

	i = 0;
	firstwrd = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			i++;
		else
		{
			if ((str[i - 1] == ' ' || str[i - 1] == '\t') && firstwrd != 0)
				write(1, "   ", 3);
			write(1, &str[i], 1);
			firstwrd = 1;
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
