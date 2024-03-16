/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:34:14 by achahbal          #+#    #+#             */
/*   Updated: 2023/11/16 16:08:11 by achahbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_count(char const *s, char c)
{
	size_t	index;
	size_t	len_s;
	size_t	count;
	size_t	tmp;

	index = 0;
	count = 0;
	if (!s)
		return (0);
	len_s = ft_strlen(s);
	while (index < len_s)
	{
		while (index < len_s && s[index] == c)
			index++;
		tmp = index;
		while (index < len_s && s[index] != c)
			index++;
		if (index > tmp)
			count++;
	}
	return (count);
}

static int	ft_free(char **s, int len)
{
	int	i;

	i = 0;
	while (i <= len)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (0);
}

static	char	*ft_strndup(char const *s, int start, char c)
{
	int		end;
	int		w_lenght;
	char	*arr;
	int		i;

	i = 0;
	end = start;
	while (s[end] && s[end] != c)
		end++;
	w_lenght = end - start;
	arr = malloc(sizeof(char) * (w_lenght + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (start < end && i < w_lenght)
	{
		arr[i] = s[start];
		start++;
		i++;
	}
	arr[i] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	index;
	size_t	i;

	index = 0;
	i = 0;
	arr = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!arr || !s)
		return (0);
	while (s[index] && i < ft_count(s, c))
	{
		while (index < ft_strlen(s) && s[index] == c && i < ft_count(s, c))
			index++;
		if (index < ft_strlen(s) && s[index] != c && i < ft_count(s, c))
			arr[i] = ft_strndup(s, index, c);
		if (!arr[i] && ft_free(arr, i) == 0)
			return (0);
		index += ft_strlen(arr[i]);
		i++;
	}
	arr[i] = 0;
	return (arr);
}
