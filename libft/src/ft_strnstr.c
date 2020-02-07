/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 16:27:12 by bkerstin          #+#    #+#             */
/*   Updated: 2019/04/20 16:27:13 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;

	if (!to_find[0])
		return ((char*)str);
	i = 1;
	while (*str && ft_strlen(to_find) <= len &&
		(i = (size_t)ft_strncmp(str, to_find, ft_strlen(to_find))))
	{
		str++;
		len--;
	}
	if (i)
		return (NULL);
	return ((char*)str);
}
