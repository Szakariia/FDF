/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 23:39:31 by hdardari          #+#    #+#             */
/*   Updated: 2019/04/02 23:43:18 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n <= 9 && n >= 0)
	{
		ft_putchar_fd((n + 48), fd);
	}
	else if (n == -2147483648)
	{
		ft_putchar_fd(('-'), fd);
		ft_putchar_fd((2 + 48), fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd(('-'), fd);
		ft_putnbr_fd((-1 * n), fd);
	}
	else if (n >= 10 && n <= 2147483647)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd((n % 10 + 48), fd);
	}
}
