/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 14:28:17 by etermeau          #+#    #+#             */
/*   Updated: 2014/12/16 13:59:57 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <mlx.h>
#include <math.h>
#include <unistd.h>

typedef	struct s_env
{
	void	*mlx;
	void	*win;
	int		x;
	int		y;
	int		z;
}			t_env;

void	draw(void *mlx, void *win)
{
	int		x;
	int		y;
	int		x1;
	int		y1;
	int		start;
	int		endx;
	int		endy;
	
	start = 210;
	endx = 600;
	endy = 400;
	x1 = endx;
	y = start;
	y1 = endy;
	while (y <= y1)
	{
		x = start;
		while (x <= x1)
		{
			mlx_pixel_put(mlx, win, x, y, 0xFFFFFF );
			x++;
		}
		y += 19;
	}
	x = start ;
	while (x <= x1)
	{
		y = start;
		while (y <= y1)
		{
			mlx_pixel_put(mlx, win, x, y, 0xFFFFFF );
			y++;
		}
		x += 15;
	}
}


int		expose_hook(t_env *e)
{
	draw(e->mlx, e->win);
	return (0);
}

int		key_hook(int keycode)
{
	printf("key: %d\n", keycode);
	if (keycode == 65307)
		exit(0);
	return (0);
}

int		main()
{
	t_env e;

	e.mlx = mlx_init();
	e.win = mlx_new_window(e.mlx, 700, 700, "42");
	mlx_expose_hook(e.win, expose_hook, &e);
	mlx_key_hook(e.win, key_hook, &e);
	mlx_loop(e.mlx);
	return (0);
}
