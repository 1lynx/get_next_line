/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:18:30 by cchampda          #+#    #+#             */
/*   Updated: 2015/11/29 16:06:15 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int count;
	int count2;

	count = 0;
	count2 = 0;
	while (s1[count])
		count++;
	if (s1[count] == '\0')
	{
		while (s2[count2])
		{
			s1[count] = s2[count2];
			count++;
			count2++;
		}
	}
	s1[count] = '\0';
	return (s1);
}
