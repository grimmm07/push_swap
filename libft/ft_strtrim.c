/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:15:37 by achahbal          #+#    #+#             */
/*   Updated: 2023/11/10 14:45:44 by achahbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	end;
	int	start;

	start = 0;
	if (!s1 || !set)
		return (0);
	end = ft_strlen(s1) - 1;
	while (s1[start] && check_set(s1[start], set))
		start++;
	while (end > 0 && check_set(s1[end], set))
		end--;
	if (end < start)
		return (ft_strdup(""));
	return (ft_substr(s1, start, (end - start + 1)));
}
