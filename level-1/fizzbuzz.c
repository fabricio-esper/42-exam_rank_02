#include <unistd.h>

static void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	nb = nb % 10 + 48;
	write(1, &nb, 1);
}

int	main(void)
{
	int	nb;

	nb = 1;
	while (nb <= 100)
	{
		if ((nb % 3 == 0) && (nb % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (nb % 3 == 0)
			write(1, "fizz", 4);
		else if (nb % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(nb);
		write(1, "\n", 1);
		nb++;
	}
	return (0);
}
