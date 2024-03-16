/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:40:07 by achahbal          #+#    #+#             */
/*   Updated: 2023/11/17 12:17:24 by achahbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len_s;
	char	*arr;
	int		index;

	if (!s || !f)
		return (NULL);
	len_s = ft_strlen(s);
	index = 0;
	arr = (char *)malloc(len_s + 1);
	if (!arr)
		return (NULL);
	while (index < len_s)
	{
		arr[index] = f(index, s[index]);
		index++;
	}
	arr[index] = '\0';
	return (arr);
}
