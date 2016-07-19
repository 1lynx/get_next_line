/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:16:59 by cchampda          #+#    #+#             */
/*   Updated: 2015/11/29 15:44:42 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*cst_s;

	i = 0;
	cst_s = (unsigned char *)s;
	while (i < len)
	{
		cst_s[i] = (unsigned char)c;
		i++;
	}
	return (cst_s);
}
