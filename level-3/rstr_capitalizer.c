#include <unistd.h>

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	rstr_capitalizer(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] == ' ') || str[i] == 0)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			if (str[i] == ' ')
				str[i - 1] -= 32;
			if (str[i + 1] == 0)
				str[i] -= 32;
		}
	}
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = -1;
		while (++i < argc)
			rstr_capitalizer(argv[i]);
	}
	else
		write(1, "\n", 1);
	return (0);
}