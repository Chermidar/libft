/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <chermida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 22:35:06 by chermida          #+#    #+#             */
/*   Updated: 2022/06/17 22:35:06 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*i;
	char	ch;

	if (!s)
		return (0);
	ch = (char)c;
	i = (char *)s;
	while (*i && *i != ch)
		++i;
	if (ch && !*i)
		return ((char *)0);
	return (i);
}
/*
Develve un puntero a la primera aarición del carácter c en la cadena s
*/
