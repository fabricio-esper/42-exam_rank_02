#include <unistd.h>

int	hidenp(char *s1, char *s2)
{
	int	i;
	int	j;

	j = -1;
	i = 0;
	while (s2[++j])
	{
		if (s1[i] == s2[j])
			i++;
	}
	if (s1[i] == '\0')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	is_hiden;
	
	if (argc == 3)
	{
		is_hiden = hidenp(argv[1], argv[2]);
		is_hiden += 48;
		write(1, &is_hiden, 1);
	}
	write(1, "\n", 1);
	return (0);
}
