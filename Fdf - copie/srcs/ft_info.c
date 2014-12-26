/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/26 17:07:23 by etermeau          #+#    #+#             */
/*   Updated: 2014/12/26 18:06:56 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include "fdf.h"

size_t		ft_count_elem(char *str)
{
	int			i;
	size_t		elem;

	i = 0;
	elem = 0;
	while (str[i])
	{
		while (str[i] == ' ' && str[i])
			i++;
		if (str[i])
			elem++;
		while (str[i] != ' ' && str[i])
			i++;
	}
	return (elem);
}

t_point		**ft_attribut(char *line, int y_pos)
{
	t_point	**pos;
	int		i;
	i = 0;

	if (!(pos = (t_point **)malloc(sizeof(t_point *)* ft_count_elem(line) + 1)))
		ft_code_erreur(2);
	while (line[i])
	{
		while (line[i] == ' ')
			i++;
		if (line[i])
		{

		}
		while (line[i] != ' ')
			i++;
	}
	return (pos);
}
