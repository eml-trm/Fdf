/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_erreur.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/27 18:11:50 by etermeau          #+#    #+#             */
/*   Updated: 2014/12/28 13:37:25 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fdf.h"
#include <stdio.h>

 int		ft_check_map(t_point ****tab)
 {
 	int		i;
  	int		j;

	i = 0;
  	while ((*tab)[i])
  	{
  		j = 0;
  		while ((*tab)[i][j])
  			j++;
  		i++;
   	}
   	if (j == 0)
   		ft_code_erreur(4);
   	else
   		ft_fdf(tab);
 	return (0);
 }

void	ft_code_erreur(int code)
{
	if (code == 0)
		ft_putstr_fd("usage : ./fdf [file]\n", 2);
	else
	{
		ft_putstr_fd("ERROR: ", 2);
		if (code == 1)
			ft_putstr_fd("Can't open file\n", 2);
		else if (code == 2)
			ft_putstr_fd("Malloc error\n", 2);
		else if (code == 3)
			ft_putstr_fd("Variable error\n", 2);
		else if (code == 4)
			ft_putstr_fd("Invalid map\n", 2);
	}
	exit (0);
}
