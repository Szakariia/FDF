/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listlenght.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 02:05:41 by hdardari          #+#    #+#             */
/*   Updated: 2019/04/13 17:21:13 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_listlenght(t_listi *value)
{
	int len;

	len = 0;
	while (value != NULL)
	{
		len++;
		value = value->next;
	}
	return (len);
}
