/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:59:02 by achahbal          #+#    #+#             */
/*   Updated: 2023/11/16 16:21:41 by achahbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int c)
{
	int	index;

	index = 0;
	if (c < 0)
	{
		index = 1;
		c *= -1;
	}
	while (c > 0)
	{
		c /= 10;
		index++;
	}
	return (index);
}

static	char	*ft_sp_case(int c)
{
	char	*arr;

	if (c == 0)
	{
		arr = malloc(2);
		if (!arr)
			return (NULL);
		arr[0] = '0';
		arr[1] = '\0';
		return (arr);
	}
	if (c == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

char	*ft_itoa(int num)
{
	char	*arr;
	int		num_count;

	if (num == 0 || num == -2147483648)
	{
		arr = ft_sp_case(num);
		if (!arr)
			return (NULL);
		return (arr);
	}
	num_count = ft_count(num);
	arr = ft_calloc(num_count + 1, 1);
	if (!arr)
		return (0);
	if (num < 0)
	{
		arr[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		arr[--num_count] = (num % 10) + '0';
		num /= 10;
	}
	return (arr);
}
