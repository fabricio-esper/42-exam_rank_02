#include <stdlib.h>

int	nbrlen(int nbr)
{
	int	i = 0;

	if (nbr == 0)
		i++;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		len;
	long	nb;

	len = nbrlen(nbr);
	nb = (long) nbr;
	if (nb < 0)
	{
		nb *= -1;
		str = malloc(sizeof(char) * (++len + 1));
		if (!str)
			return (NULL);
		str[0] = '-';
	}
	else
	{
		str = malloc(sizeof(char) * (len + 1));
		if (!str)
			return (NULL);
	}
	str[len] = '\0';
	if (nb == 0)
		str[--len] = nb + 48;
	while (nb > 0)
	{
		str[--len] = (nb % 10) + 48;
		nb /= 10;
	}
	return (str);
}
