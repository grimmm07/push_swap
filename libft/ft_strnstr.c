/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:48:48 by achahbal          #+#    #+#             */
/*   Updated: 2023/11/16 16:19:43 by achahbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	i;

	a = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[a])
	{
		i = 0;
		if (haystack[a] == needle[0])
		{
			while ((a + i) < len && needle[i] == haystack[a + i] && needle[i])
				i++;
			if (needle[i] == '\0')
				return ((char *)&haystack[a]);
		}
		a++;
	}
	return (0);
}
