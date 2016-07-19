/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <cchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 13:17:24 by cchampda          #+#    #+#             */
/*   Updated: 2016/07/19 15:06:27 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "./libft/libft.h"

# define BUFF_SIZE 10
# define ERROR { return (-1); }
# define LST_CNT file->content
# define M_READ read(fd, buff, BUFF_SIZE)
# define EOL 0x0a

int		get_next_line(const int fd, char **line);

#endif
