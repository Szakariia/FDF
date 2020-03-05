/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 01:13:08 by hdardari          #+#    #+#             */
/*   Updated: 2019/04/17 23:57:09 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*n;

	i = 0;
	if (s)
	{
		while (s[i])
			i++;
		if (!(n = (char *)malloc((i + 1) * sizeof(char))))
			return (NULL);
		i = 0;
		while (s[i])
		{
			n[i] = f(s[i]);
			i++;
		}
		n[i] = '\0';
		return (n);
	}
	return (NULL);
}
