int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				buffer;

	i = 0;
	buffer = 0;
	while (i < len)
	{
		printf("%d\n", i);
		if (buffer < tab[i])
			buffer = tab[i];
		i++;
	}
	return (buffer);
}
