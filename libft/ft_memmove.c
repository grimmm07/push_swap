/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:00:05 by achahbal          #+#    #+#             */
/*   Updated: 2023/11/15 18:58:04 by achahbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*arr_dst;
	unsigned char	*arr_src;

	arr_dst = (unsigned char *)dst;
	arr_src = (unsigned char *)src;
	if (!arr_dst && !arr_src)
		return (0);
	if (arr_dst > arr_src)
	{
		while (len--)
			arr_dst[len] = arr_src[len];
	}
	else
		ft_memcpy(arr_dst, arr_src, len);
	return (arr_dst);
}
