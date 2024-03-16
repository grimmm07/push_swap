/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:59:35 by achahbal          #+#    #+#             */
/*   Updated: 2023/11/16 13:30:54 by achahbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			index;

	index = 0;
	str = (unsigned char *)s;
	while (index < n)
	{
		if (str[index] == (unsigned char)c)
			return (str + index);
		index++;
	}
	return (0);
}
