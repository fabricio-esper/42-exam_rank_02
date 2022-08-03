#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	str = (char *) argv[1];
	if (argc == 2)
	{
		i = 0;
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
