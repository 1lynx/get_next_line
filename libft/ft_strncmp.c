/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:20:50 by cchampda          #+#    #+#             */
/*   Updated: 2015/11/29 14:21:05 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*csts1;
	unsigned char	*csts2;

	i = 0;
	csts1 = (unsigned char *)s1;
	csts2 = (unsigned char *)s2;
	while ((csts1[i] || csts2[i]) && i != n)
	{
		if (csts1[i] != csts2[i])
			return (csts1[i] - csts2[i]);
		i++;
	}
	return (0);
}
