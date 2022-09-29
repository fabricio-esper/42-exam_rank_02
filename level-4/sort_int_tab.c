#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				temp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

#include <stdio.h>

int	main()
{
	int	tab[] = {4, 5, 42, 3, 7};
	sort_int_tab(tab, 5);
	int	i = 0;
	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
