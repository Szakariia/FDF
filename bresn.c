/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bresn.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 15:00:54 by hdardari          #+#    #+#             */
/*   Updated: 2019/08/05 15:49:54 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		ft_sign(int x)
{
	if (x > 0)
		return (1);
	else if (x < 0)
		return (-1);
	else
		return (0);
}

void			ft_bresenham2(t_mlx *mlx, t_cords cords, int c)
{
	t_bres bres;

	bres.x = cords.x1;
	bres.y = cords.y1;
	bres.dx = abs(cords.x2 - cords.x1);
	bres.dy = abs(cords.y2 - cords.y1);
	bres.resulx = ft_sign(cords.x2 - cords.x1);
	bres.resuly = ft_sign(cords.y2 - cords.y1);
	bres.p = (2 * bres.dx) - bres.dy;
	bres.i = -1;
	while (++bres.i < bres.dy)
	{
		if (c == 0)
			mlx_pixel_put(mlx->ptr, mlx->win, bres.y, bres.x, 0x00CED1);
		else
			mlx_pixel_put(mlx->ptr, mlx->win, bres.y, bres.x, 0xFFFF00);
		while (bres.p >= 0)
		{
			bres.p = bres.p - 2 * bres.dy;
			bres.x = bres.x + bres.resulx;
		}
		bres.p = bres.p + 2 * bres.dx;
		bres.y = bres.y + bres.resuly;
	}
}

void			ft_bresenham(t_mlx *mlx, t_cords cords, int c)
{
	t_bres bres;

	bres.x = cords.x1;
	bres.y = cords.y1;
	bres.dx = abs(cords.x2 - cords.x1);
	bres.dy = abs(cords.y2 - cords.y1);
	bres.resulx = ft_sign(cords.x2 - cords.x1);
	bres.resuly = ft_sign(cords.y2 - cords.y1);
	if (bres.dy > bres.dx)
		ft_bresenham2(mlx, cords, c);
	bres.p = (2 * bres.dy) - bres.dx;
	bres.i = -1;
	while (++bres.i < bres.dx)
	{
		c == 0 ? mlx_pixel_put(mlx->ptr, mlx->win, bres.y, bres.x, 0x00CED1) :
			mlx_pixel_put(mlx->ptr, mlx->win, bres.y, bres.x, 0xFFFF00);
		while (bres.p >= 0)
		{
			bres.p = bres.p - 2 * bres.dx;
			bres.y = bres.y + bres.resuly;
		}
		bres.p = bres.p + 2 * bres.dy;
		bres.x = bres.x + bres.resulx;
	}
}
