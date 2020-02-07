/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 19:51:04 by bkerstin          #+#    #+#             */
/*   Updated: 2019/04/16 19:51:07 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char*)dst;
	s = (char*)src;
	if (s < d)
	{
		s = s + len - 1;
		d = d + len - 1;
		while (len--)
			*d-- = *s--;
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}
