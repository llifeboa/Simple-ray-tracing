/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 19:42:38 by bkerstin          #+#    #+#             */
/*   Updated: 2019/04/22 19:42:39 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		word_len(char const *str, char c)
{
	size_t			i;
	size_t			len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i])
	{
		i++;
		len++;
	}
	return (len);
}

static size_t		w_cnt(char const *str, char c)
{
	size_t			count;
	size_t			i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i])
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return (count);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**dest;
	size_t			i;
	size_t			k;
	unsigned int	j;

	if (!s || !(dest = (char**)ft_memalloc(sizeof(char*) * (w_cnt(s, c) + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (++i < w_cnt(s, c))
	{
		k = 0;
		while (s[j] == c)
			j++;
		if (!(dest[i] = ft_strnew(word_len(&s[j], c))))
		{
			while (i)
				ft_strdel(&dest[--i]);
			free(dest);
			return (NULL);
		}
		while (s[j] != c && s[j])
			dest[i][k++] = s[j++];
	}
	return (dest);
}
