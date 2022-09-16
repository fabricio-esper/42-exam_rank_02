int	ft_strnchr(char *s, int c, int size)
{
	int	i;

	i = 0;
	while (size--)
	{
		if (c == s[i])
			return (i);
		i++;
	}
	return (0);
}

char	to_upper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	to_power(int nbr, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	if (power == 1)
		return (nbr);
	while (power--)
		result *= nbr;
	return (result);
}

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_atoi_base(const char *str, int str_base)
{
	long	nbr;
	int		temp;
	int		temp2;
	int		sign;
	int		i;
	int		len;

	nbr = 0;
	temp = 0;
	temp2 = 0;
	sign = 1;
	i = -1;
	len = ft_strlen(str) - 1;
	if (str[0] == '-')
	{
		sign = -1;
		len--;
		i++;
	}
	while (str[++i])
	{
		if (ft_strnchr("0123456789ABCDEF", to_upper(str[i]), str_base) || str[i] == '0')
		{
			temp = ft_strnchr("0123456789ABCDEF", to_upper(str[i]), str_base);
			temp2 = to_power(str_base, len);
			nbr += temp * temp2;
			len--;
		}
		else
			return (0);
	}
	return (sign * nbr);
}
