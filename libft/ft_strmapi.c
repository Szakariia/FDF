/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 01:29:46 by hdardari          #+#    #+#             */
/*   Updated: 2019/04/17 23:56:54 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*n;

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
			n[i] = f(i, s[i]);
			i++;
		}
		n[i] = '\0';
		return (n);
	}
	return (NULL);
}
