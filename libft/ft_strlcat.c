/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:14:21 by achahbal          #+#    #+#             */
/*   Updated: 2023/11/16 15:57:34 by achahbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;
	size_t	results;

	i = 0;
	len_src = ft_strlen(src);
	if (!dstsize)
		return (len_src);
	len_dest = ft_strlen(dst);
	results = len_dest + len_src;
	if (dstsize < len_dest || !dstsize)
		return (dstsize + len_src);
	while (src[i] && len_dest < dstsize - 1)
	{
		dst[len_dest] = src[i];
		i++;
		len_dest++;
	}
	dst[len_dest] = '\0';
	return (results);
}
