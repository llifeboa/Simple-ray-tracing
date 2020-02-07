/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <bkerstin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 15:17:27 by bkerstin          #+#    #+#             */
/*   Updated: 2020/01/25 15:17:35 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atod(char *str)
{
	double	res;
	double	tmp;
	char	*s;

	res = (double)ft_atoi(str);
	if ((s = ft_strchr(str, '.')))
	{
		while (str != s && ft_isdigit(*str))
			str++;
		if (str == s)
		{
			s++;
			tmp = *s == '-' ? 0 : (double)ft_atoi(s);
			while (tmp >= 1)
				tmp /= 10;
			res = res >= 0 ? res + tmp : res - tmp;
		}
	}
	return (res);
}
