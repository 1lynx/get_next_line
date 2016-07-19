/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 13:38:12 by cchampda          #+#    #+#             */
/*   Updated: 2015/12/08 13:38:17 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	cst_c;
	unsigned char	*cst_s;
	size_t			i;

	i = 0;
	cst_c = (unsigned char)c;
	cst_s = (unsigned char *)s;
	while (i < n)
	{
		if (*(cst_s + i) == cst_c)
			return (cst_s + i);
		i++;
	}
	return (NULL);
}
