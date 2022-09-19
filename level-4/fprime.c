#include <stdio.h>
#include <stdlib.h>

int	is_prime(int nbr)
{
	int	i;

	i = 2;
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	fprime(char *str)
{
	int	nbr;
	int	i;
	int	mult;
	int	temp;

	nbr = atoi(str);
	i = 2;
	mult = 1;
	temp = nbr;
	while (i <= nbr)
	{
		while (is_prime(i) && temp % i == 0)
		{
			printf("%d", i);
			if (mult * i != nbr)
				printf("*");
			mult *= i;
			temp /= i;
		}
		if (mult == nbr)
			break ;
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		fprime(argv[1]);
	printf("\n");
	return (0);
}
