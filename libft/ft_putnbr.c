/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 14:39:08 by hdardari          #+#    #+#             */
/*   Updated: 2019/03/30 15:13:25 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n <= 9 && n >= 0)
	{
		ft_putchar(n + 48);
	}
	else if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar(2 + 48);
		ft_putnbr(147483648);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-1 * n);
	}
	else if (n >= 10 && n <= 2147483647)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + 48);
	}
}
