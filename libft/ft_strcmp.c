/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 18:21:52 by hdardari          #+#    #+#             */
/*   Updated: 2019/03/31 23:18:57 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*s;
	unsigned char	*c;

	i = 0;
	s = (unsigned char*)s1;
	c = (unsigned char*)s2;
	while (s[i] != '\0' && c[i] != '\0' && (s[i] == c[i]))
		i++;
	return (s[i] - c[i]);
}
