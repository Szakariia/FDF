/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 23:24:11 by hdardari          #+#    #+#             */
/*   Updated: 2019/04/03 17:08:44 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;
	char	*j;
	char	*k;

	i = 0;
	if (s1 && s2)
	{
		j = (char*)s1;
		k = (char*)s2;
		while (j[i] && k[i] && (j[i] == k[i]))
		{
			i++;
		}
		if (j[i] == '\0' && k[i] == '\0')
			return (1);
		else
			return (0);
	}
	return (0);
}
