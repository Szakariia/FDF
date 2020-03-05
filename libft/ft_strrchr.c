/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 18:24:14 by hdardari          #+#    #+#             */
/*   Updated: 2019/03/31 23:08:46 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*b;

	b = (char*)s;
	i = 0;
	j = 0;
	while (b[i])
	{
		if (b[i] == c)
			j++;
		i++;
	}
	i = 0;
	while (b[i])
	{
		if (b[i] == c)
			j--;
		if (j == 0 && b[i] == c)
			return (b + i);
		i++;
	}
	if (b[i] == '\0' && b[i] == c)
		return (b + i);
	return (0);
}
