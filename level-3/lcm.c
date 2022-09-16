static int	is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	i;
	int	mmc;

	i = 2;
	mmc = 1;
	while (1)
	{
		if (a <= 1 && b <= 1)
			break ;
		while (is_prime(i) && (a % i == 0 || b % i == 0))
		{
			if (a % i == 0)
				a /= i;
			if (b % i == 0)
				b /= i;
			mmc *= i;
		}
		i++;
	}
	return (mmc);
}
