/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 16:46:07 by hdardari          #+#    #+#             */
/*   Updated: 2019/08/05 19:37:57 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			ft_free_int(t_mlx *mlx)
{
	int i;

	i = 0;
	while (i < mlx->y)
	{
		free(mlx->tab[i]);
		i++;
	}
	free(mlx->tab);
}

static void		main2(t_mlx *mlx, t_stock stock, int size)
{
	stock.split_line = ft_strsplit(stock.line, '\n');
	free(stock.line);
	stock1(mlx, stock);
	stock2(mlx, stock);
	draw_it(mlx, size);
	mlx_key_hook(mlx->win, key_select, mlx);
	mlx_loop(mlx->ptr);
}

static int		ft_error(int i)
{
	if (i == 1)
	{
		ft_putendl("Usage <file>");
		return (0);
	}
	else if (i == 2)
	{
		ft_putendl("error in the <file>");
		return (0);
	}
	return (0);
}

int				main(int ac, char **argv)
{
	t_stock	stock;
	t_mlx	*mlx;
	int		size;

	if (ac != 2)
		return (ft_error(1));
	size = 1;
	mlx = (t_mlx*)malloc(sizeof(t_mlx));
	mlx->ptr = mlx_init();
	mlx->y1 = 0;
	mlx->x1 = 0;
	mlx->p = 0;
	mlx->win = mlx_new_window(mlx->ptr, 1000, 1000, argv[1]);
	stock.line = ft_strnew(0);
	stock.fd = open(argv[1], O_RDONLY);
	while ((stock.res = read(stock.fd, stock.buffer, BUFF_SIZE)) > 0)
	{
		stock.buffer[stock.res] = '\0';
		stock.temp = ft_strjoin(stock.line, stock.buffer);
		free(stock.line);
		stock.line = stock.temp;
	}
	if (stock.res == -1)
		return (ft_error(2));
	main2(mlx, stock, size);
}
