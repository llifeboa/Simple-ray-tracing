/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 20:35:07 by bkerstin          #+#    #+#             */
/*   Updated: 2019/04/20 20:35:10 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	len1;
	size_t	lensrc;

	len1 = 0;
	lensrc = ft_strlen(src);
	while (*dest && len > 0)
	{
		dest++;
		len1++;
		len--;
	}
	while (*src && (len--) > 1)
	{
		*dest++ = *src++;
		if (len == 1 || *src == '\0')
			*dest = '\0';
	}
	return (len1 + lensrc);
}
