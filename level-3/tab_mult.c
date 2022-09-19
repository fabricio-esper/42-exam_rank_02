#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int	ft_atoi(char *str)
{
	int		i;
	long	nbr;

	nbr = 0;
	i = -1;
	while (str[++i])
		nbr = nbr * 10 + (str[i] - 48);
	return (nbr);
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

void	tab_mult(char *str)
{
	int	i;

	i = 1;
	while (i <= 9)
	{
		ft_putchar(i + 48);
		ft_putstr(" x ");
		ft_putstr(str);
		ft_putstr(" = ");
		ft_putnbr(ft_atoi(str) * i);
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(argv[1]);
	write(1, "\n", 1);
	return (0);
}
