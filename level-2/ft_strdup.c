#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*str;
	int		i;

	len = ft_strlen(src);
	str = malloc(len * sizeof(char));
	if (!str)
		return (0);
	i = -1;
	while (src[++i])
		str[i] = src[i];
	return (str);
}