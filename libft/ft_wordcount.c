/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 00:57:23 by hdardari          #+#    #+#             */
/*   Updated: 2019/04/13 02:00:06 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(const char *str, char c)
{
	int		nbword;
	int		i;

	nbword = 0;
	i = 0;
	while (str[i] == c)
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if ((str[i] == c && str[i + 1] != c) && str[i + 1])
			nbword++;
		i++;
	}
	nbword++;
	return (nbword);
}
