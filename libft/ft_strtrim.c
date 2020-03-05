/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 02:31:09 by hdardari          #+#    #+#             */
/*   Updated: 2019/04/13 18:09:51 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		j;

	if (s)
	{
		i = 0;
		j = 0;
		while (s[j])
			j++;
		while ((s[i] == ' ' || s[i] == '\n'
					|| s[i] == ',' || s[i] == '\t') && s[i])
			i++;
		while ((s[j - 1] == ' ' || s[j - 1] == '\n'
					|| s[j - 1] == ',' || s[j - 1] == '\t') && s[i])
			j--;
		return (ft_strsub(s, i, (j - i)));
	}
	return (NULL);
}
