/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 00:00:14 by hdardari          #+#    #+#             */
/*   Updated: 2019/04/15 18:31:16 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;

	if (!(s = (char *)malloc((len) * sizeof(char))))
		return (NULL);
	s = ft_memcpy(s, src, len);
	dst = ft_memcpy(dst, s, len);
	free(s);
	return (dst);
}
