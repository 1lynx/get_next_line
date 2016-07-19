/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <cchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 13:14:51 by cchampda          #+#    #+#             */
/*   Updated: 2016/07/19 15:15:36 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	t_list		*add_node(t_list **begin, int fd)
{
	t_list			*tmp;

	tmp = *begin;
	if (tmp)
	{
		while (tmp)
		{
			if (fd == (int)tmp->content_size)
				return (tmp);
			tmp = tmp->next;
		}
	}
	if (!(tmp = ft_lstnew("\0", 1)))
		return (NULL);
	tmp->content_size = fd;
	ft_lstadd(begin, tmp);
	return (tmp);
}

static	char		*free_join(char *str, char *buff, size_t *i)
{
	char			*tmp;

	tmp = str;
	if (!(str = ft_strnjoin(str, buff, *i)))
		return (NULL);
	ft_memdel((void **)&tmp);
	return (str);
}

int					get_next_line(const int fd, char **line)
{
	char			buff[BUFF_SIZE + 1];
	char			*tmp;
	t_list			*begin;
	size_t			i;
	static	t_list	*file = NULL;

	if (read(fd, buff, 0) < 0 || fd < 0 || !line || BUFF_SIZE < 1)
		ERROR;
	begin = file;
	file = add_node(&begin, fd);
	while ((i = M_READ) && (!(ft_strchr(LST_CNT, (EOL || 0x00)))))
		LST_CNT = free_join(LST_CNT, buff, &i);
	i = 0;
	while (((char *)LST_CNT)[i] && ((char *)LST_CNT)[i] != EOL)
		i++;
	if (!(*line = ft_strndup((char *)LST_CNT, i)))
		ERROR;
	if (((char *)LST_CNT)[i] == EOL)
		i++;
	tmp = LST_CNT;
	if (!(LST_CNT = ft_strdup(LST_CNT + i)))
		ERROR;
	ft_memdel((void **)&tmp);
	file = begin;
	return (i ? 1 : 0);
}
