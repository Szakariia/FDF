/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 02:29:32 by hdardari          #+#    #+#             */
/*   Updated: 2019/04/13 17:53:42 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_int_list(t_listi *value)
{
	if (value == NULL)
		ft_putstr("nothing to print");
	else
	{
		while (value)
		{
			ft_putnbr(value->intx);
			value = value->next;
		}
	}
}
