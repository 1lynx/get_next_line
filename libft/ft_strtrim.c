/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:22:29 by cchampda          #+#    #+#             */
/*   Updated: 2015/11/29 14:22:32 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_debut(char const *s)
{
	size_t		i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		s[i] == '\r' || s[i] == '\v' || s[i] == '\f')
		i++;
	return (i);
}

static int		ft_fin(char const *s)
{
	size_t		i;

	i = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		s[i] == '\r' || s[i] == '\v' || s[i] == '\f')
		i--;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		j;
	size_t		k;
	char		*pt;

	i = ft_debut(s);
	j = ft_fin(s);
	if (ft_strlen(s) == 0 || i == ft_strlen(s))
		return ("");
	if (s[i] == '\0')
		return (0);
	pt = (char *)malloc(sizeof(char) * (j - i + 1));
	if (pt == NULL)
		return (NULL);
	k = 0;
	while (i <= j)
	{
		pt[k] = s[i];
		i++;
		k++;
	}
	pt[k] = '\0';
	return (pt);
}
