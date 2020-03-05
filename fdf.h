/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 03:07:21 by hdardari          #+#    #+#             */
/*   Updated: 2019/08/05 19:38:06 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <unistd.h>
# include "libft/libft.h"
# include <fcntl.h>
# include <stdio.h>
# include <mlx.h>
# define BUFF_SIZE 10000
# include <math.h>

typedef struct	s_stock
{
	int		fd;
	int		res;
	int		inx;
	int		inx2;
	char	buffer[BUFF_SIZE + 1];
	char	*temp;
	char	*line;
	char	**split_line;
	char	**split_space;
}				t_stock;

typedef struct	s_mlx
{
	int		**tab;
	int		x;
	int		y;
	void	*ptr;
	void	*win;
	int		size;
	char	color[9];
	int		i;
	int		j;
	int		p;
	int		x1;
	int		y1;
}				t_mlx;

typedef struct	s_cords
{
	int x1;
	int x2;
	int x3;
	int y1;
	int y2;
	int y3;
}				t_cords;

typedef struct	s_bres
{
	int dx;
	int dy;
	int resulx;
	int	resuly;
	int p;
	int i;
	int x;
	int y;
}				t_bres;

typedef struct	s_keys
{
	int size_plus;
	int size_minus;
	int size;
}				t_keys;

void			draw_it(t_mlx *mlx, int size);
void			draw_iso(t_mlx *mlx, int size);
void			ft_bresenham(t_mlx *mlx, t_cords cords, int c);
void			stock1(t_mlx *mlx, t_stock stock);
void			stock2(t_mlx *mlx, t_stock stock);
int				key_select(int key, t_mlx *mlx);
void			ft_free_int(t_mlx *mlx);
#endif
