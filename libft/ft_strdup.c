/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 23:55:41 by hdardari          #+#    #+#             */
/*   Updated: 2019/04/17 23:57:47 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		j;
	char	*ptr;
	char	*s;

	s = (char*)src;
	i = 0;
	j = 0;
	while (s[i])
		i++;
	if (!(ptr = (char *)malloc((i + 1) * sizeof(char))))
		return (NULL);
	while (s[j])
	{
		ptr[j] = s[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
