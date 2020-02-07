/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 16:36:32 by bkerstin          #+#    #+#             */
/*   Updated: 2019/04/22 16:36:34 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *pos;

	pos = NULL;
	while (*str)
	{
		if (*str == (char)c)
			pos = (char*)str;
		str++;
	}
	if (*str == (char)c)
		return ((char*)str);
	return (pos);
}
