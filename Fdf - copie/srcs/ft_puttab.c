/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 23:02:28 by etermeau          #+#    #+#             */
/*   Updated: 2014/12/22 17:24:56 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>

void	ft_puttab(int **tab)
{
	int	i;
	int	j;

	i = 0;
	if (tab)
	{	
		while (tab[i] != NULL)
		{
			j = 1;
			while (j != tab[i][0])
			{
				ft_putnbr(tab[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}


void    ft_puttab_char(char **tab)
{
	int     i;
	int     j;

	i = 0;
	if (tab)
	{
		while (tab[i])
		{
			j = 0;
			while (tab[i][j])
			{
				ft_putchar(tab[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
