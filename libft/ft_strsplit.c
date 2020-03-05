/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 18:06:00 by hdardari          #+#    #+#             */
/*   Updated: 2019/04/17 23:55:04 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		i;
	int		j;
	int		k;

	if (s)
	{
		i = 0;
		j = 0;
		k = ft_wordcount(s, c);
		if (!(t = (char **)malloc((k + 1) * sizeof(char *))))
			return (NULL);
		while (k > j)
		{
			while (s[i] == c)
				s++;
			t[j] = ft_strsub(s, 0, ft_letcount(s, c));
			s = s + ft_letcount(s, c);
			j++;
		}
		t[k] = NULL;
		return (t);
	}
	return (NULL);
}
