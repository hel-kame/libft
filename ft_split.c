#include "libft.h"

static int	count_words(char const *s, char c)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			word++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (word);
}

static int	find_words(char const *s, char c, int i)
{
	if (i == 0 && s[i] != c && s[i] != '\0')
		return (i);
	while (s[i] != c && s[i] != '\0')
		i++;
	while (s[i] == c && s[i] != '\0')
		i++;
	return (i);
}

static int	length_words(char const *s, char c, int i)
{
	int		length;

	length = 0;
	while (s[i + length] != c && s[i + length] != '\0')
		length++;
	return (length);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		y;
	int		size;
	int		init;
	char	**tab;

	if (s == NULL)
		return (NULL);
	i = -1;
	init = 0;
	size = count_words(s, c);
	if (!(tab = malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	while (++i < size && s[i] != '\0')
	{
		init = find_words(s, c, init);
		y = 0;
		if (!(tab[i] = (char *)malloc(sizeof(char) * length_words(s, c, init))))
			return (NULL);
		while (s[init] != '\0' && s[init] != c)
			tab[i][y++] = s[init++];
		tab[i][y] = '\0';
	}
	tab[i] = NULL;
	return (tab);
}
