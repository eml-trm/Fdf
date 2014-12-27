/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/26 13:24:20 by etermeau          #+#    #+#             */
/*   Updated: 2014/12/27 22:07:54 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# define GPS_X 16
# define GPS_Y 5
# define INCX 0.9
# define INCY 0.9
# define SPC 10
# define ENV (*tab)[0][0]

typedef struct	s_point
{
	void		*mlx;
	void		*win;
	int			x;
	int			y;
	int			z;
}				t_point;

void			ft_draw_tab(t_point ****tab, int i);
void			ft_fdf(t_point ****tab);
t_point			**ft_attribut(char *line, int y_pos);
void			ft_code_erreur(int code);

#endif
