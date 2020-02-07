/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <bkerstin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 17:53:03 by bkerstin          #+#    #+#             */
/*   Updated: 2020/01/24 18:46:19 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && (*s1 == *s2) && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	if (n > 0)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (0);
}
