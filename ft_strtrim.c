/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:49:15 by hel-kame          #+#    #+#             */
/*   Updated: 2022/11/10 11:29:56 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	i;
	size_t	y;
	size_t	length;
	char	*str;

	i = 0;
	y = 0;
	length = 0;
	str = malloc(length + 2);
	if (!(str))
		return (NULL);
	while (is_in_set(s[i], set) && s[i] != '\0')
		i++;
	while (s[i + length])
		length++;
	while ((is_in_set(s[i + length], set) || !s[i + length]) && length > 0)
		length--;
	while (y <= length)
	{
		str[y] = s[i + y];
		y++;
	}
	str[y] = '\0';
	return (str);
}
