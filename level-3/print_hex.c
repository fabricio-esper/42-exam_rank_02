#include <unistd.h>

int	ft_atoi(const char *str)
{
	long	nbr;
	int		i;

	nbr = 0;
	i = -1;
	while (str[++i])	
		nbr = (nbr * 10) + (str[i] - 48);
	return (nbr);
}

void	print_hex(int nbr)
{
	char hex[] = "0123456789abcdef";

	if (nbr >= 16)
		print_hex(nbr / 16);
	write(1, &hex[nbr % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_hex(ft_atoi(argv[1]));
	}
	write(1, "\n", 1);
	return (0);
}
