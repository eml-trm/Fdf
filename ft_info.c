/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/09 11:41:11 by etermeau          #+#    #+#             */
/*   Updated: 2014/12/22 18:10:15 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <libft.h>
#include "fdf.h"

int 	**ft_switch_tab(char **tab)
{
	char	**tmp;
	int		**map;
	int		x;
	int		y;

	x = 0;
	y = 0;
	if (!(map = (int **)malloc(sizeof(int) * 1024)))
		return (NULL);
	while (tab[x])
	{
		tmp = ft_strsplit(tab[x], ' ');
		ft_puttab_char(tmp);
		if (!(map = (int **)malloc(sizeof(int) * ft_strlen(tmp[y]))))
			return (NULL);
		while(tmp[y])
		{
			map[x][y] = ft_atoi(tmp[y]);
			y++;
		}
		x++;
	}
	map[x][y] = '\0';
	return (map);
}

size_t	ft_tab_len(char **tab)
{
	int i;

	i = 0;
	if (tab[i])
	{
		while (tab[i])
			i++;
	}
	return (i);
}

int		**ft_format_tab(char **tab)
{
	int		**map;

	if (!(map = (int **)malloc(sizeof(int) * ft_tab_len(tab))))
		return (NULL);
	map = ft_switch_tab(tab);
	ft_puttab(map);
	return (map);
}
