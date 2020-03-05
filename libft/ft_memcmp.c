/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 16:59:11 by hdardari          #+#    #+#             */
/*   Updated: 2019/03/31 22:20:53 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*c;

	i = 0;
	s = (unsigned char*)s1;
	c = (unsigned char*)s2;
	while (i < n)
	{
		if (s[i] == c[i])
			i++;
		else
			break ;
	}
	if (i == n)
		return (0);
	else
		return (s[i] - c[i]);
}
