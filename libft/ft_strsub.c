/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 01:36:11 by hdardari          #+#    #+#             */
/*   Updated: 2019/04/17 23:54:31 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*n;
	size_t		i;

	i = 0;
	if (s)
	{
		if (!(n = (char *)malloc((len + 1) * sizeof(char))))
			return (NULL);
		while (len > 0)
		{
			n[i] = s[start];
			i++;
			start++;
			len--;
		}
		n[i] = '\0';
		if (n == NULL)
			return (NULL);
		return (n);
	}
	return (NULL);
}
