/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkerstin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 14:09:53 by bkerstin          #+#    #+#             */
/*   Updated: 2019/04/23 14:09:55 by bkerstin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	const char	*endstr;

	if (!s)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	if (!*s)
		return (ft_strnew(0));
	endstr = s + ft_strlen(s) - 1;
	while (*endstr == ' ' || *endstr == '\t' || *endstr == '\n')
		endstr--;
	return (ft_strsub(s, 0, endstr - s + 1));
}
