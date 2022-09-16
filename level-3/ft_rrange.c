#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*range;
	int	len;
	int	high;
	int	low;
	int	i;

	if (start > end)
	{
		high = start;
		low = end;
	}
	else
	{
		high = end;
		low = start;
	}
	len = high - low;
	range = malloc(sizeof(int) * len + 1);
	if (!range)
		return (NULL);
	i = 0;
	while (high >= low)
	{
		range[i] = high;
		i++;
		high--;
	}
	return (range);
}
