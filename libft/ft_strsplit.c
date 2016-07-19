/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:22:02 by cchampda          #+#    #+#             */
/*   Updated: 2015/11/29 14:22:06 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cnt_word(const char *s, char c)
{
	int	cnt;
	int	begin_word;

	begin_word = 0;
	cnt = 0;
	while (*s != '\0')
	{
		if (begin_word == 1 && *s == c)
			begin_word = 0;
		if (begin_word == 0 && *s != c)
		{
			begin_word = 1;
			cnt++;
		}
		s++;
	}
	return (cnt);
}

static int	ft_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		nb_word;
	int		index;

	index = 0;
	nb_word = ft_cnt_word((const char *)s, c);
	t = (char **)malloc(sizeof(*t) * (ft_cnt_word((const char *)s, c) + 1));
	if (t == NULL)
		return (NULL);
	while (nb_word--)
	{
		while (*s == c && *s != '\0')
			s++;
		t[index] = ft_strsub((const char *)s, 0, ft_len((const char *)s, c));
		if (t[index] == NULL)
			return (NULL);
		s = s + ft_len(s, c);
		index++;
	}
	t[index] = NULL;
	return (t);
}
