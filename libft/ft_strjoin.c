/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 01:55:16 by hdardari          #+#    #+#             */
/*   Updated: 2019/04/17 23:58:28 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*n;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 && s2)
	{
		while (((char *)s1)[i])
			i++;
		while (((char *)s2)[j])
			j++;
		if (!(n = (char *)malloc(i + j + 1 * sizeof(char))))
			return (NULL);
		i = 0;
		j = 0;
		while (((char *)s1)[j])
			n[i++] = ((char *)s1)[j++];
		j = 0;
		while (((char *)s2)[j])
			n[i++] = ((char *)s2)[j++];
		n[i] = '\0';
		return (n);
	}
	return (NULL);
}
