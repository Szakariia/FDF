/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 22:01:46 by hdardari          #+#    #+#             */
/*   Updated: 2019/04/14 20:30:41 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	int		ft_power(int n, int p)
{
	int		x;

	x = 1;
	while (p > 0)
	{
		x = x * n;
		p--;
	}
	return (x);
}

char			*ft_itoa(int n)
{
	char		*s;
	int			i;
	long		r;
	int			len;

	r = (long)n;
	len = ft_numlen(r);
	i = 0;
	if (!(s = malloc((ft_numlen(r) + 2) * sizeof(char))))
		return (NULL);
	if (n < 0)
	{
		s[i++] = '-';
		r = r * -1;
	}
	while (len-- > 0)
	{
		s[i++] = r / ft_power(10, len) + '0';
		r = r % ft_power(10, len);
	}
	s[i++] = '\0';
	return (s);
}
