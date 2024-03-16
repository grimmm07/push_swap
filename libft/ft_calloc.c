/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:21:07 by achahbal          #+#    #+#             */
/*   Updated: 2023/11/16 14:59:26 by achahbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*arr;
	size_t	i;

	i = 0;
	if (size == 0 || count == 0)
		return (malloc(0));
	if (count > SIZE_MAX / size)
		return (NULL);
	arr = malloc(count * size);
	if (!arr)
		return (NULL);
	while (i < count * size)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
