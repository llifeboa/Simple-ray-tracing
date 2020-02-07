/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 17:50:08 by bkerstin          #+#    #+#             */
/*   Updated: 2019/04/22 17:50:10 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	if (!(str = ft_strnew(len)))
		return (NULL);
	i = 0;
	s += start;
	while (len > 0)
	{
		str[i] = s[i];
		i++;
		len--;
	}
	return (str);
}
