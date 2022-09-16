#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		nbr %= 10;
	}
	ft_putchar(nbr + 48);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "0", 1);
	else
	{
		argc--;
		ft_putnbr(argc);
	}
	write (1, "\n", 1);
	return (0);
}
