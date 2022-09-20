#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	is_space(char c)
{
	if (c != ' ' && c != '\t' && c != '\n')
		return (0);
	return (1);
}

int	wordcount(char *str)
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

char	**ft_split(char *str)
{
	char	**splited;
	int		i;
	int		j;


	splited = malloc(sizeof(char *) * wordcount(str));
	if (!splited)
		return (0);
	i = -1;
	j = 0;
	while (str[++i] && j < wordcount(str))
	{
		while (is_space(str[i]))
			i++;
		
		j++;
	}
	splited[j] = 0;
	return splited;
}

int	main(void)
{
	char	**str;

	str = ft_split("Chocolate is good");
	return (0);
}
