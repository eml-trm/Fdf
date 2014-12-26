/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/09 11:41:11 by etermeau          #+#    #+#             */
/*   Updated: 2014/12/13 11:33:59 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <libft.h>
#include "fdf.h"

size_t	ft_tab_len(char **tab)
{
	size_t i;

	i = 0;
	if (tab)
	{
		while (tab[i])
			i++;
	}
	return (i);
}

int		**ft_switch_tab(char **tab)
{
	char	**tmp;
	int		**map;
	int		x;
	int		y;

	x = 0;
	if (!(map = (int **)malloc(sizeof(int *) * ft_tab_len(tab) + 1)))
		return (NULL);
	while (tab[x])
	{
		tmp = ft_strsplit(tab[x], ' ');
		if (!(map[x] = (int *)malloc(sizeof(int) * ft_tab_len(tmp) + 1)))
			return (NULL);
		map[x][0] = ft_tab_len(tmp);
		y = 0;
		while (tmp[y])
		{
			map[x][y + 1] = ft_atoi(tmp[y]);
			y++;
		}
		x++;
	}
	map[x] = NULL;
	ft_puttab(map);
	return (map);
}

int		**ft_format_tab(char **tab)
{
	int		**map;

	if (!(map = (int **)malloc(sizeof(int) * ft_tab_len(tab))))
		return (NULL);
	map = ft_switch_tab(tab);
	return (map);
}
