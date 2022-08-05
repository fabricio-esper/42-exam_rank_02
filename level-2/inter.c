#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}