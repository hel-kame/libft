#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = NULL;
	while (i < n)
	{
		((unsigned char *)tmp)[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)tmp)[i];
		i++;
	}
	return (dest);
	//ft_memcpy(tmp, src, n);
	//ft_memcpy(dest, tmp, n);
	//return (dest);
}
