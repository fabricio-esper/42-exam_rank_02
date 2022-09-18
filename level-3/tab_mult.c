#include <unistd.h>

void	tab_mult(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(argv[1]);
	write(1, "\n", 1);
	return (0);
}
