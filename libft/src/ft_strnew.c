/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 16:27:11 by bkerstin          #+#    #+#             */
/*   Updated: 2019/04/18 16:27:13 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t n)
{
	char	*str;

	if (n == (size_t)-1)
		return (NULL);
	str = (char*)ft_memalloc(sizeof(char) * (n + 1));
	return (str);
}
