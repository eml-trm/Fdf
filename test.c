/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 14:28:17 by etermeau          #+#    #+#             */
/*   Updated: 2014/12/05 18:40:49 by etermeau         ###   ########.fr       */
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
}			t_env;

void	draw(void *mlx, void *win)
{
	int     x;
	int     y;
	int     color1;

	color1 = 0xFF99FF;
	y = 100;
	while (y < 600)
	{
		x = 100;
		while (x < 600)
		{
			mlx_pixel_put(mlx, win, x, y, color1);
			x++;
		}
		y++;
		color1++;
	}
}

int		expose_hook(t_env *e)
{
	draw(e->mlx, e->win);
	return (0);
}

int		key_hook(int keycode, t_env *e)
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
