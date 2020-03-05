/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 15:25:53 by hdardari          #+#    #+#             */
/*   Updated: 2019/03/31 23:15:56 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		sig;
	int		res;
	char	*b;

	b = (char*)str;
	i = 0;
	sig = 1;
	res = 0;
	while (b[i] == ' ' || b[i] == '\t' || b[i] == '\n'
			|| b[i] == '\v' || b[i] == '\r' || b[i] == '\f')
		i++;
	if (b[i] == '-')
	{
		sig = -1;
		i++;
	}
	else if (b[i] == '+')
		i++;
	while (b[i] <= '9' && b[i] >= '0')
	{
		res = res * 10 + b[i] - '0';
		i++;
	}
	return (sig * res);
}
