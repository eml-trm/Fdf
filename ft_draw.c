/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/08 11:06:19 by etermeau          #+#    #+#             */
/*   Updated: 2014/12/22 16:34:07 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_draw_line(t_point pa, t_point pb, t_env *e)
{
	int		len;
	float	newx;
	float	newy;
	float	incx;
	float	incy;

	len = MAX(ABS(pb.y - pa.y), ABS(pb.x - pa.x));
	incx = ((float)(pb.x - pa.x) / len);
	incy = ((float)(pb.y - pa.y) / len);
	newx = pa.x + 0.5;
	newy = pa.y + 0.5;
	while (len >= 0)
	{
		mlx_pixel_put(e->mlx, e->win, (int)newx, (int)newy, 0xFFFFFF);
		newx += incx;
		newy += incy;
		len--;
	}
}

void	ft_draw_tab(t_env *e)
{
	t_point a;
	t_point b;
	int		i;
	int		j;

	j = 0;
	while (e->map[j])
	{
		i = 1;
		while ((i++) < e->map[j][0])
		{
			a = new_point(j * 20, i * 20, e->map[j][i], 0);
			if (i + 1 <=e->map[j][0])
			{
				b = new_point(j * 20, (i + 1) * 20, e->map[j][i + 1], 0);
				ft_draw_line(a, b, e);
			}
			if (e->map[j + 1])
			{
				b = new_point((j + 1) * 20, i * 20, e->map[j][i], 0);
				ft_draw_line(a, b, e);
			}
		}
		j++;
	}
}
