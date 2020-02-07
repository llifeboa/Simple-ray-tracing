/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:07:14 by bkerstin          #+#    #+#             */
/*   Updated: 2019/04/18 14:07:17 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int						i;
	int						sign;
	unsigned long long int	d;

	d = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	sign = (str[i] == '-') ? -1 : 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		d = d * 10 + (str[i] - '0');
		i++;
	}
	if (d > 9223372036854775807)
		return ((sign == -1) ? 0 : -1);
	return ((int)(d * sign));
}
