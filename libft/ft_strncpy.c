/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 15:36:55 by hdardari          #+#    #+#             */
/*   Updated: 2019/04/01 20:40:59 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t	i;
	char	*s;

	s = (char*)src;
	i = 0;
	while (s[i] && len > i)
	{
		dest[i] = s[i];
		i++;
	}
	while (len > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
