#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	y;
	size_t	len1;
	size_t	len2;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = -1;
	y = -1;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!(str))
		return (NULL);
	while (s1[++i] != '\0')
		str[i] = s1[i];
	while (s2[++y] != '\0')
		str[i + y] = s2[y];
	str[i + y] = '\0';
	return (str);
}
