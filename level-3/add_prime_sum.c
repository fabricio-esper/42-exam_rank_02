#include <unistd.h>

static int	ft_atoi(const char *str)
{
	long	nbr;
	int		i;

	nbr = 0;
	i = -1;
	while (str[++i] && str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + str[i] - '0';
	}
	return (nbr);
}

static int	is_prime(int nbr)
{
	int	i;

	i = 2;
	while (i <= nbr)
	{
		if (nbr % i == 0 && i != nbr)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		nbr = nbr % 10;
	}
	ft_putchar(nbr + '0');
}

int	main(int argc, char **argv)
{
	long	nbr;
	int		i;
	int		sum;

	nbr = 0;
	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		if (nbr <= 0)
			write(1, "0", 1);
		else
		{
			i = 2;
			sum = 0;
			while (i <= nbr)
			{
				if (is_prime(i))
					sum += i;
				i++;
			}
			ft_putnbr(sum);
		}
	}
	write(1, "\n", 1);
	return (0);
}
