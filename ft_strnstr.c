/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:48:58 by hel-kame          #+#    #+#             */
/*   Updated: 2022/11/11 18:08:41 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	progress;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)&haystack[i]);
	while (i < len && haystack[i] != '\0')
	{
		progress = 0;
		while (progress + i < len
		&& needle[progress] == haystack[progress + i])
		{
			if (needle[progress + 1] == '\0')
				return ((char *)&haystack[i]);
			progress++;
		}
		i++;
	}
	return (0);
}

int main(void)
{
	ft_strnstr(NULL, "bonjour", 0);
	strnstr(NULL, "bonjour", 0);
}
