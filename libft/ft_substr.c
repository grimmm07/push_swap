/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:43:22 by achahbal          #+#    #+#             */
/*   Updated: 2023/11/16 15:02:37 by achahbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;
	size_t	end;
	size_t	len_s;

	if (!s)
		return (0);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	end = 0;
	if (start < len_s)
		end = len_s - start;
	if (end > len)
		end = len;
	arr = (char *)malloc(end + 1);
	if (!arr)
		return (0);
	i = 0;
	while (s[start] && i < end)
		arr[i++] = s[start++];
	arr[i] = '\0';
	return (arr);
}
