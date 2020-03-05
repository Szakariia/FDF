/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 17:51:40 by hdardari          #+#    #+#             */
/*   Updated: 2019/03/31 22:38:01 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[j])
		j++;
	while (src[i])
		i++;
	if (size <= j)
		i = i + size;
	else
		i = i + j;
	while (src[k] && j + 1 < size)
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (i);
}
