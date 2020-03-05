/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 15:22:23 by hdardari          #+#    #+#             */
/*   Updated: 2019/03/31 23:38:53 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*c;

	s = (unsigned char*)s1;
	c = (unsigned char*)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s[i] && c[i] && (s[i] == c[i]) && n > i + 1)
	{
		i++;
	}
	return (s[i] - c[i]);
}
