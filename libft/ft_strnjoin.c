/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <cchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 14:11:45 by cchampda          #+#    #+#             */
/*   Updated: 2016/07/19 15:08:07 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnjoin(const char *s1, const char *s2, size_t len)
{
	char	*str;
	size_t	nbr;
	char	*tmp;

	nbr = (ft_strlen(s1) + ++len);
	if (!(str = ft_strnew(nbr)))
		return (NULL);
	tmp = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2 && --len > 0)
		*str++ = *s2++;
	*str = '\0';
	str = (str - (str - tmp));
	return (str);
}
