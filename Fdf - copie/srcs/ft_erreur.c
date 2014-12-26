/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_erreur.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/26 14:56:03 by etermeau          #+#    #+#             */
/*   Updated: 2014/12/26 18:07:06 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_code_erreur(int code)
{
	if (code == 0)
		ft_putstr_fd("usage : ./fdf [file]\n", 2);
	else
	{
		ft_putstr_fd("ERROR: ", 2);
		if (code == 1)
			ft_putstr_fd("can't open file\n", 2);
		else if (code == 2)
			ft_putstr_fd("malloc error\n", 2);
	}
	exit (0);
}
