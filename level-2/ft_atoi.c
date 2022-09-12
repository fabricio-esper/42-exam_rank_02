static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long	nb;
	long	temp;
	int		sign;

	nb = 0;
	temp = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
		if (*str == '-' || *str == '+')
			return (0);
	}
	while (*str >= '0' && *str <= '9')
	{
		temp = nb;
		nb = (nb * 10) + *str++ - '0';
		if (temp > nb)
		{
			if (sign > 0)
				return (-1);
			else
				return (0);
		}
	}
	return (sign * nb);
}
