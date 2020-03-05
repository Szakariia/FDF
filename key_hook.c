/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 16:06:00 by hdardari          #+#    #+#             */
/*   Updated: 2019/08/05 19:52:22 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_menu(t_mlx *mlx, int i)
{
	if (i == 1)
	{
		mlx_string_put(mlx->ptr, mlx->win, 460, 40, 0x00CED1, "MENU : ");
		mlx_string_put(mlx->ptr, mlx->win, 110, 80, 0x00CED1, "    [^]");
		mlx_string_put(mlx->ptr, mlx->win, 110, 100, 0x00CED1, "[<] [v] [>]");
		mlx_string_put(mlx->ptr, mlx->win, 146, 125, 0x00CED1, "Move ");
		mlx_string_put(mlx->ptr, mlx->win, 360, 120, 0x00CED1, " +/- : Zoom");
		mlx_string_put(mlx->ptr, mlx->win, 360, 80, 0x00CED1, "  i : Iso");
		mlx_string_put(mlx->ptr, mlx->win, 680, 80, 0x00CED1, " p : Parallel");
		mlx_string_put(mlx->ptr, mlx->win, 680, 120, 0x00CED1, " esc : Exit");
		mlx_string_put(mlx->ptr, mlx->win, 310, 100, 0xFFFF00,
				" ---------------------------------------------\
				---------------- ");
		mlx_string_put(mlx->ptr, mlx->win, 30, 60, 0xFFFF66,
				" ---------------------------------------------------\
				--------------------------------------");
		mlx_string_put(mlx->ptr, mlx->win, 30, 140, 0xFFFF66,
				" ----------------------------------------------------\
				-------------------------------------");
		mlx_string_put(mlx->ptr, mlx->win, 30, 20, 0xFFFF66,
				" -----------------------------------------------------\
				------------------------------------");
	}
}

static void		ft_move(t_mlx *mlx, int key, t_keys keys)
{
	if (key == 126)
	{
		mlx->x1 = mlx->x1 - 10;
		mlx_clear_window(mlx->ptr, mlx->win);
		draw_it(mlx, keys.size);
	}
	else if (key == 125)
	{
		mlx->x1 = mlx->x1 + 10;
		mlx_clear_window(mlx->ptr, mlx->win);
		draw_it(mlx, keys.size);
	}
	else if (key == 124)
	{
		mlx->y1 = mlx->y1 + 10;
		mlx_clear_window(mlx->ptr, mlx->win);
		draw_it(mlx, keys.size);
	}
	else if (key == 123)
	{
		mlx->y1 = mlx->y1 - 10;
		mlx_clear_window(mlx->ptr, mlx->win);
		draw_it(mlx, keys.size);
	}
}

static int		key_select2(t_mlx *mlx, int key, t_keys keys)
{
	if (key == 35)
	{
		mlx->p = 0;
		mlx_clear_window(mlx->ptr, mlx->win);
		draw_it(mlx, keys.size);
	}
	else if (key == 69)
	{
		mlx_clear_window(mlx->ptr, mlx->win);
		draw_it(mlx, keys.size_plus);
	}
	else if (key == 78)
	{
		mlx_clear_window(mlx->ptr, mlx->win);
		draw_it(mlx, keys.size_minus);
	}
	else
		return (1);
	return (0);
}

int				key_select(int key, t_mlx *mlx)
{
	t_keys		keys;

	keys.size = mlx->size;
	keys.size_plus = mlx->size + 1;
	keys.size_minus = mlx->size - 1;
	if (key == 53)
	{
		exit(0);
		ft_free_int(mlx);
	}
	else if (key == 34)
	{
		mlx->p = 1;
		mlx_clear_window(mlx->ptr, mlx->win);
		draw_it(mlx, keys.size);
	}
	else if (key == 46)
		ft_menu(mlx, 1);
	else if (key_select2(mlx, key, keys))
		ft_move(mlx, key, keys);
	return (0);
}
