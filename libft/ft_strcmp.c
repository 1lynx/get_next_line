/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:18:53 by cchampda          #+#    #+#             */
/*   Updated: 2015/11/29 14:26:08 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*csts1;
	unsigned char	*csts2;

	i = 0;
	csts1 = (unsigned char *)s1;
	csts2 = (unsigned char *)s2;
	while (csts1[i] || csts2[i])
	{
		if (csts1[i] != csts2[i])
			return (csts1[i] - csts2[i]);
		i++;
	}
	return (0);
}
