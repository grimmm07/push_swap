/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:31:35 by achahbal          #+#    #+#             */
/*   Updated: 2023/11/16 13:42:24 by achahbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*arr;
	char	ch;

	ch = (unsigned char)c;
	i = 0;
	arr = (char *)s;
	if (ch == 0)
		return (&arr[ft_strlen(s)]);
	while (arr[i])
	{
		if (arr[i] == ch)
			return (&arr[i]);
		i++;
	}
	return (0);
}
