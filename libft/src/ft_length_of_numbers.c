/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_length_of_numbers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 01:11:27 by bkerstin          #+#    #+#             */
/*   Updated: 2019/04/19 01:11:28 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_length_of_numbers(int nbr)
{
	int		i;

	i = 0;
	if (nbr == -2147483648)
		return (10);
	else if (nbr < 0)
		nbr *= -1;
	else if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}
