/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 16:51:31 by bkerstin          #+#    #+#             */
/*   Updated: 2019/04/18 16:51:33 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_itoa_helper(int *n)
{
	char	res;

	res = (*n % 10) + '0';
	*n = *n / 10;
	return (res);
}

char		*ft_itoa(int n)
{
	char	*nbr;
	int		i;
	int		k;

	i = ft_length_of_numbers(n) + ((n >= 0) ? 0 : 1);
	k = i;
	if (!(nbr = (char*)malloc(sizeof(char) * (i--) + 1)))
		return (NULL);
	if (((n < 0) ? 1 : 0) == 0)
		while (i >= 0)
			nbr[i--] = ft_itoa_helper(&n);
	else
	{
		while (i > 0)
		{
			nbr[i--] = (n % 10) * (-1) + '0';
			n /= 10;
		}
		nbr[i] = '-';
	}
	nbr[k] = '\0';
	return (nbr);
}
