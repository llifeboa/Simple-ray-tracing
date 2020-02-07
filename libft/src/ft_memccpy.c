/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 17:14:21 by bkerstin          #+#    #+#             */
/*   Updated: 2019/04/13 17:14:25 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s;
	char			*d;

	s = (unsigned char*)src;
	d = (char*)dst;
	while (n > 0 && *s != (unsigned char)c)
	{
		n--;
		*d++ = *s++;
	}
	if (n > 0)
	{
		*d++ = *s++;
		return ((void*)d);
	}
	else
		return (NULL);
}
