/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:24:06 by chermida          #+#    #+#             */
/*   Updated: 2022/11/01 12:43:13 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*i;

	if (!s)
		return (NULL);
	ch = (unsigned char)c;
	i = (unsigned char *)s;
	while (n && *i != ch)
	{
		++i;
		--n;
	}
	if (!n)
		return (0);
	return (i);
}
/*
Esca ea los n bytes iniciales de la memoria en
el area apuntada por s para la primera instancia de c.
Tanto c como los bytes del area apuntada por s
se interpretan como unsigned char.
*/
