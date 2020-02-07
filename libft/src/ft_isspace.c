/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 17:35:08 by bkerstin          #+#    #+#             */
/*   Updated: 2019/04/21 17:35:10 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	if ((unsigned char)c == '\t' ||
		(unsigned char)c == '\n' ||
		(unsigned char)c == '\v' ||
		(unsigned char)c == '\f' ||
		(unsigned char)c == '\r' ||
		(unsigned char)c == ' ')
		return (1);
	return (0);
}
