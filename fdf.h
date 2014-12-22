/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 15:48:35 by etermeau          #+#    #+#             */
/*   Updated: 2014/12/22 17:25:19 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# define WID 700
# define HEIG 700

# define C_RED			16
# define C_GREEN		8
# define C_BLUE			0

# define RGB(r, g, b)	(((r & 0xFF) << 16) + ((g & 0xFF) << 8) + (b & 0xFF))
# define COL(rgb, a)	((rgb >> a) & 0xFF) 

# define ABS(x)			((x < 0) ? (x) * -1 : (x))
# define MAX(a, b)		((a < b) ? (b) : (a))

# include <unistd.h>
# include <stdlib.h>
# include <mlx.h>
# include <math.h>
# include <fcntl.h>
# include "libft.h"

typedef struct	s_env
{
	void		*mlx;
	void		*win;
	int			**map;
}				t_env;

typedef struct	s_point
{
	int			x;
	int			y;
	int			z;
	int			rgb;
}				t_point;

int		**read_fdf(char **av);
void	ft_puttab(int **tab);
t_point	new_point(int i, int j, int z, int rgb);
void	ft_draw_tab(t_env *e);
void	ft_draw_line(t_point pa, t_point pb, t_env *e);
int		**ft_format_tab(char **tab);
#endif
