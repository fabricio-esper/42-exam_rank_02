char	*ft_strnchr(const char *s, int c, int size)
{
	int	i;

	i = 0;
	while (s[i] != c && size)
	{
		if (s[i] == 0)
			return (0);
		i++;
		size--;
	}
	return (s);
}

int	ft_atoi_base(const char *str, int str_base)
{
	long	nbr;
	int		sign;
	int		i;

	nbr = 0;
	sign = 1;
	i = 0;
	while (str[++i])
	{		
		if (str[0] == '-')
			sign = -1;
		if (str[i] >= 'a' && str[i] <= 'f')
			str[i] -= 32;
		if (!ft_strnchr("0123456789ABCDEF", str[i], str_base))
		{
			
		}
	}
	return (sign * nbr);
}