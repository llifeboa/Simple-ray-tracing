/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 16:34:54 by bkerstin          #+#    #+#             */
/*   Updated: 2019/04/18 16:34:55 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t n)
{
	void	*mem;

	mem = malloc(n);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, n);
	return (mem);
}
