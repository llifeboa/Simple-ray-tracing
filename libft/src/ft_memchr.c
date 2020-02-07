/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 16:56:03 by bkerstin          #+#    #+#             */
/*   Updated: 2019/04/21 16:56:05 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;

	src = (unsigned char*)s;
	while (n > 0 && *src != (unsigned char)c)
	{
		src++;
		n--;
	}
	if (!n)
		return (NULL);
	else
		return (src);
}
