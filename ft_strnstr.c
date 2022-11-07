#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	progress;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)&haystack[i]);
	while (haystack[i] != '\0' && i < len)
	{
		progress = 0;
		while (needle[progress] == haystack[progress + i]
			&& progress + i < len)
		{
			if (needle[progress + 1] == '\0')
				return ((char *)&haystack[i]);
			progress++;
		}
		i++;
	}
	return (0);
}
