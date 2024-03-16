/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:33:25 by achahbal          #+#    #+#             */
/*   Updated: 2023/11/16 15:00:01 by achahbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*arr;
	size_t	i;
	size_t	index;

	i = ft_strlen(s1);
	index = 0;
	arr = (char *)malloc(i + 1);
	if (!arr)
		return (0);
	while (s1[index])
	{
		arr[index] = s1[index];
		index++;
	}
	arr[index] = '\0';
	return (arr);
}
