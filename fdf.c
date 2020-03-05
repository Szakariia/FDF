/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_it.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 21:24:39 by hdardari          #+#    #+#             */
/*   Updated: 2019/08/05 19:44:14 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		iso(int *x, int *y, int z)
{
	int previous_x;
	int previous_y;

	previous_x = *x + 500;
	previous_y = *y;
	*x = (previous_x - previous_y) * cos(0.523599);
	*y = -(z + 50) + (previous_x + previous_y) * sin(0.523599);
}

static void		first(t_mlx *mlx, t_cords cords, int *color, int size)
{
	cords.x2 = mlx->i * size + (((1000 - (mlx->y * size))) / 2) + mlx->x1;
	cords.y2 = (mlx->j + 1) * size + ((1000 - mlx->x * size) / 2) + mlx->y1;
	if (mlx->tab[mlx->i][mlx->j] != 0 || mlx->tab[mlx->i][mlx->j + 1] != 0)
		*color = 1;
	if (mlx->p)
		iso(&cords.y2, &cords.x2, mlx->tab[mlx->i][mlx->j + 1]);
	ft_bresenham(mlx, cords, *color);
}

static void		draw_it2(t_mlx *mlx, int size)
{
	int		color;
	t_cords	cords;

	cords.x1 = (mlx->i * size) + (((1000 - (mlx->y * size))) / 2) + mlx->x1;
	cords.y1 = mlx->j * size + (((1000 - (mlx->x * size))) / 2) + mlx->y1;
	if (mlx->p)
		iso(&cords.y1, &cords.x1, mlx->tab[mlx->i][mlx->j]);
	if (mlx->i + 1 < mlx->y && !(color = 0))
	{
		cords.x2 = (mlx->i + 1) *
			size + ((1000 - (mlx->y * size)) / 2) + mlx->x1;
		cords.y2 = mlx->j * size + ((1000 - (mlx->x * size)) / 2) + mlx->y1;
		if (mlx->tab[mlx->i + 1][mlx->j] != 0 || mlx->tab[mlx->i][mlx->j] != 0)
			color = 1;
		if (mlx->p)
			iso(&cords.y2, &cords.x2, mlx->tab[mlx->i + 1][mlx->j]);
		ft_bresenham(mlx, cords, color);
	}
	if (mlx->j + 1 < mlx->x)
		first(mlx, cords, &color, size);
}

void			draw_it(t_mlx *mlx, int size)
{
	int i;
	int j;

	i = -1;
	mlx->size = size;
	if (mlx->x > 50 || mlx->y > 50)
		size = size + 1;
	else
		size = size + 20;
	while (++i < mlx->y)
	{
		j = -1;
		while (++j < mlx->x)
		{
			mlx->i = i;
			mlx->j = j;
			draw_it2(mlx, size);
		}
	}
}
