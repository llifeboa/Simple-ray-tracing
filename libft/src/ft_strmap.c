/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 12:45:16 by bkerstin          #+#    #+#             */
/*   Updated: 2019/04/23 12:45:18 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*result;

	if (!s)
		return (NULL);
	if (!(str = ft_strnew(ft_strlen(s))))
		return (NULL);
	result = str;
	while (*s)
	{
		*str = (*f)(*s);
		s++;
		str++;
	}
	return (result);
}
