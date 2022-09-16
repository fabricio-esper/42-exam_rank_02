#include <stdio.h>
#include <stdlib.h>

int	is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb)
	{
		if (i != nb && nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	pgcd(char *s1, char *s2)
{
	int	a;
	int	b;
	int	i;
	int	temp;

	a = atoi(s1);
	b = atoi (s2);
	i = 2;
	temp = 1;
	while (1)
	{
		if (a == 1 || b == 1)
			break ;
		if ((a % i == 0 || b % i == 0) && is_prime(i))
		{
			if (a % i == 0 && b % i == 0)
				temp *= i;
			if (a % i == 0)
				a /= i;
			if (b % i == 0)
				b /= i;
		}
		i++;
	}
	printf("%d", temp);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(argv[1], argv[2]);
	printf("\n");
	return (0);
}
