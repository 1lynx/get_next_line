/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:16:17 by cchampda          #+#    #+#             */
/*   Updated: 2015/11/29 14:16:24 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str, const void *str2, size_t n)
{
	unsigned char	*cast_str;
	unsigned char	*cast_str2;
	int				i;

	i = 0;
	cast_str = (unsigned char *)str;
	cast_str2 = (unsigned char *)str2;
	if (!str && !str2 && !n)
		return (0);
	while (n--)
	{
		if (cast_str[i] != cast_str2[i])
			return (cast_str[i] - cast_str2[i]);
		i++;
	}
	return (0);
}
