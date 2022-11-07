#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		size;
	char	*cpy;

	i = 0;
	size = ft_strlen(s1);
	cpy = malloc(sizeof(*s1) * size + 1);
	if (!(cpy))
		return (NULL);
	while (i < size)
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[size] = '\0';
	return (cpy);
}
