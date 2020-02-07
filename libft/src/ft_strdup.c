/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 15:58:07 by bkerstin          #+#    #+#             */
/*   Updated: 2019/04/18 15:58:09 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*str2;
	size_t	i;

	i = 0;
	if (!(str2 = ft_strnew(ft_strlen(str1))))
		return (NULL);
	while (i < ft_strlen(str1))
	{
		str2[i] = str1[i];
		i++;
	}
	return (str2);
}
