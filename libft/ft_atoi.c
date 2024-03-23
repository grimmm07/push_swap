/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:08:55 by achahbal          #+#    #+#             */
/*   Updated: 2023/11/16 15:44:32 by achahbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	long	results;
	int		sign;
	int		i;

	i = 0;
	results = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (!str[i])
		return (2147483649);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (results * 10 > 2147483647)
			return (2147483649);
		results = (results * 10) + (str[i] - '0');
		i++;
	}
	if (str[i])
		return (2147483649);
	return (results * sign);
}
