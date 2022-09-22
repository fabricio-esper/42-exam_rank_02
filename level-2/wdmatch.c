#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	wdmatch(char *s1, char *s2)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (s2[i])
	{
		if (s1[j] == s2[i])
			j++;
		if (s1[j] == '\0')
		{
			ft_putstr(s1);
			return ;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}