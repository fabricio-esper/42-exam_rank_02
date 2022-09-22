#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	is_space(char c)
{
	if (c != ' ' && c != '\t' && c != '\n')
		return (0);
	return (1);
}

static int	wordcount(char *str)
{
	int	i;
	int	wordnbr;

	i = -1;
	wordnbr = 0;
	while (str[++i])
	{
		if (!is_space(str[i]) && (is_space(str[i - 1]) || i == 0))
			wordnbr++;
	}
	return (wordnbr);
}

static int	wordlen(char *str)
{
	int	i = 0;
	while (str[i] && !is_space(str[i]))
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;

	if (start > ft_strlen(s))
		return (NULL);
	if (ft_strlen(s) - start >= len)
		substr = malloc(sizeof(char) * (len + 1));
	else
		substr = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	if (!substr)
		return (NULL);
	while ()
	return (substr);
}

char	**ft_split(char *str)
{
	char	**splited;
	int		i;
	int		j;
	int		k;

	splited = malloc(sizeof(char *) * wordcount(str));
	if (!splited)
		return (0);
	i = -1;
	j = 0;
	while (str[++i] && j < wordcount(str))
	{
		while (is_space(str[i]))
			i++;
		k = 0;
		while (!is_space(str[i]))
		{
			splited[j] = malloc(sizeof(char) * wordlen(&str[i]) + 1)
			splited[j][k] = str[i];
			k++;
		}
		splited[j][k] = '\0';
		i += wordlen(&str[i])
		j++;
	}
	splited[j] = '\0';
	return splited;
}

int	main(void)
{
	char	**str;

	str = ft_split("Chocolate is good");
	return (0);
}
