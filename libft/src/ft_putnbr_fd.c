/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 00:08:57 by bkerstin          #+#    #+#             */
/*   Updated: 2019/04/19 00:08:59 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	sign;
	int	array_digits[10];
	int	i;

	i = 0;
	if (n == 0)
		return (ft_putchar_fd('0', fd));
	sign = (n < 0) ? -1 : 1;
	if (n < 0)
		ft_putchar_fd('-', fd);
	while (n != 0)
	{
		array_digits[i++] = sign * (n % 10);
		n /= 10;
	}
	while (--i >= 0)
		ft_putchar_fd(array_digits[i] + '0', fd);
}
