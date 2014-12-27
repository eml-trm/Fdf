/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 23:29:40 by etermeau          #+#    #+#             */
/*   Updated: 2014/12/13 11:28:58 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

int			gnl_copy(char **line, char *str, int ret)
{
	int		len;

	if (*line != NULL)
	{
		free(*line);
		*line = NULL;
	}
	if (ft_strchr(str, '\n'))
	{
		*line = ft_strcdup(str, '\n');
		len = ft_strlen(*line);
		ft_memmove(str, str + len + 1, ft_strlen(str) - len);
	}
	else if (ret == 0)
		*line = ft_strdup(str);
	return (1);
}

int			gnl_read(int fd, char **str)
{
	char		buf[BUFF_SIZE + 1];
	int			ret;
	char		*tmp;

	while (!ft_strchr(*str, '\n') && (ret = read(fd, buf, BUFF_SIZE)) >= 1)
	{
		buf[ret] = 0;
		tmp = *str;
		*str = ft_strjoin(tmp, buf);
		free(tmp);
	}
	return (ret);
}

int			get_next_line(int const fd, char **line)
{
	static char			*str;
	int					ret;

	*line = (char *)malloc(sizeof(char));
	if (str == NULL)
		str = ft_strnew(1);
	ret = gnl_read(fd, &str);
	if (ret == -1)
		return (-1);
	else if (ret == 0 && *str == 0)
		return (0);
	else
		return (gnl_copy(line, str, ret));
}
