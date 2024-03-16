/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:45:11 by achahbal          #+#    #+#             */
/*   Updated: 2023/11/16 16:24:07 by achahbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const	void *source, size_t n)
{
	size_t			i;
	unsigned char	*arr_dest;
	unsigned char	*arr_source;

	i = 0;
	arr_dest = (unsigned char *)dest;
	arr_source = (unsigned char *)source;
	if (!arr_dest && !arr_source)
		return (0);
	while (i < n)
	{
		arr_dest[i] = arr_source[i];
		i++;
	}
	return (arr_dest);
}
