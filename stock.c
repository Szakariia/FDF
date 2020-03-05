/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 18:40:58 by hdardari          #+#    #+#             */
/*   Updated: 2019/08/05 18:41:04 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		ft_free(t_stock stock, int j)
{
	int i;

	if (j == 1)
	{
		i = -1;
		while (stock.split_line[++i])
			free(stock.split_line[i]);
		free(stock.split_line);
	}
	if (j == 2)
	{
		i = -1;
		while (stock.split_space[++i])
			free(stock.split_space[i]);
		free(stock.split_space);
	}
}

void		stock1(t_mlx *mlx, t_stock stock)
{
	mlx->y = 0;
	mlx->x = 0;
	while (stock.split_line[mlx->y] != NULL)
		mlx->y++;
	mlx->tab = (int **)malloc(sizeof(int *) * mlx->y);
	stock.inx = 0;
	stock.split_space = ft_strsplit(stock.split_line[1], ' ');
	while (stock.split_space[stock.inx])
	{
		(stock.inx)++;
		mlx->x++;
	}
	ft_free(stock, 2);
	stock.inx = 0;
}

void		stock2(t_mlx *mlx, t_stock stock)
{
	stock.inx = 0;
	while (stock.inx < mlx->y)
	{
		mlx->tab[stock.inx] = (int *)malloc(sizeof(int) * mlx->x);
		stock.split_space = ft_strsplit(stock.split_line[stock.inx], ' ');
		stock.inx2 = -1;
		while (stock.split_space[++(stock.inx2)])
		{
			mlx->tab[stock.inx][stock.inx2] =
				ft_atoi(stock.split_space[stock.inx2]);
		}
		ft_free(stock, 2);
		(stock.inx)++;
	}
	ft_free(stock, 1);
}
