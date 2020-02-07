/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 01:51:12 by bkerstin          #+#    #+#             */
/*   Updated: 2019/04/19 01:51:13 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t	i;
	size_t	j;

	if (!to_find[0])
		return ((char*)str);
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 1;
			while (str[i + j] == to_find[j] && to_find[j])
				j++;
			if (!to_find[j])
				return ((char*)&str[i]);
		}
		i++;
	}
	return (NULL);
}
