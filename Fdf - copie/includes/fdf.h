/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/26 13:24:20 by etermeau          #+#    #+#             */
/*   Updated: 2014/12/26 18:07:04 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

typedef struct	s_point
{
	void	*mlx;
	void	*win;
	int		x;
	int		y;
	int		z;
}				t_point;

t_point	**ft_attribut(char *line, int y_pos);
void	ft_code_erreur(int code);

#endif
