static int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strrev(char *str)
{
	char	buffer;
	int		i;
	int		len;
	int		lenght;

	len = ft_strlen(str);
	lenght = len / 2;
	i = 0;
	while (lenght)
	{
		buffer = str[i];
		str[i] = str[len - 1];
		str[len - 1] = buffer;
		i++;
		len--;
		lenght--;
	}
	return (str);
}
