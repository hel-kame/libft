#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	val;
	int	neg;

	i = 0;
	val = 0;
	neg = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		val *= 10;
		val += str[i] - '0';
		i++;
	}
	if (neg == 1)
		return (-val);
	else
		return (val);
}
