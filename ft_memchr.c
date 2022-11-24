/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:24:06 by chermida          #+#    #+#             */
/*   Updated: 2022/11/23 16:12:28 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*arr;
	size_t			i;

	i = 0;
	arr = (unsigned char *)s;
	while (i < n)
	{
		if (arr[i] == (unsigned char)c)
			return ((unsigned char *)&arr[i]);
		i++;
	}
	return (0);
}
/*
Esca ea los n bytes iniciales de la memoria en
el area apuntada por s para la primera instancia de c.
Tanto c como los bytes del area apuntada por s
se interpretan como unsigned char.
*/
