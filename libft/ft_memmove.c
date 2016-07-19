/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:16:53 by cchampda          #+#    #+#             */
/*   Updated: 2015/12/14 15:43:55 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t n)
{
	char		*cst_dst;
	const char	*cst_src;

	cst_dst = dst;
	cst_src = src;
	if (n <= 0)
		return (dst);
	if (cst_dst < cst_src)
		while (n-- > 0)
			*cst_dst++ = *cst_src++;
	else
	{
		cst_dst += n;
		cst_src += n;
		while (n-- > 0)
		{
			*--cst_dst = *--cst_src;
		}
	}
	return (dst);
}
