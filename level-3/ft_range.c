#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*range;
	int	len;
	int	low;
	int	high;
	int	i;

	if (start > end)
	{
		len = start - end;
		high = start;
		low = end;
	}
	else
	{
		len = end - start;
		high = end;
		low = start;
	}
	range = malloc((len + 1) * sizeof(int));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (low <= high)
	{
		range[i] = low;
		i++;
		low++;
	}
	return (range);
}
