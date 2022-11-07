#include "libft.h"

int	nb_size(int n)
{
	int		size;
	long	nb;

	nb = n;
	size = 1;
	if (nb < 0)
	{
		size++;
		nb = -nb;
	}
	while (nb >= 10)
	{
		size++;
		nb /= 10;
	}
	return (size);
}

char	*ft_itoa(int nb)
{
	char	*str;
	int		size;
	long	nbr;
	int		i;

	i = 0;
	size = nb_size(nb);
	str = (char *)malloc(sizeof(char) * size + 1);
	if (!(str))
		return (NULL);
	if (nb < 0)
		str[0] = '-';
	nbr = nb;
	if (nbr < 0)
		nbr = -nbr;
	str[size - i++] = '\0';
	while (nbr >= 10)
	{
		str[size - i++] = (nbr % 10) + 48;
		nbr /= 10;
	}
	str[size - i] = (nbr % 10) + 48;
	return (str);
}
