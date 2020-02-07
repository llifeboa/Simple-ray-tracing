/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 23:38:05 by bkerstin          #+#    #+#             */
/*   Updated: 2019/04/18 23:38:07 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648 || n == 2147483647)
		return ((n > 0) ? ft_putstr("2147483647") : ft_putstr("-2147483648"));
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if ((n / 10) > 0)
	{
		ft_putnbr(n / 10);
		ft_putchar('0' + (n % 10));
	}
	else
		ft_putchar(n + '0');
}