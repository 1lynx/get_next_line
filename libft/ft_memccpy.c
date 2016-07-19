/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:15:56 by cchampda          #+#    #+#             */
/*   Updated: 2015/11/29 14:16:04 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*cast_dst;
	unsigned char	*cast_src;
	unsigned char	cast_c;

	cast_dst = (unsigned char*)dst;
	cast_src = (unsigned char*)src;
	cast_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if ((*cast_dst++ = *cast_src++) == cast_c)
			return (cast_dst);
		i++;
	}
	return (NULL);
}
