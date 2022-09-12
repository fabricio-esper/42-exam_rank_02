#include <unistd.h>

static int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

static void	alpha_mirror(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'Z' - str[i] + 'A';
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'z' - str[i] + 'a';
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		alpha_mirror(argv[1]);
		write(1, argv[1], ft_strlen(argv[1]));
	}
	write(1, "\n", 1);
}
