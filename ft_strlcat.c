/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <chermida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:52:45 by chermida          #+#    #+#             */
/*   Updated: 2022/06/17 21:52:45 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dest_len > size)
		return (src_len + size);
	if (size == 0)
		return (src_len);
	while (src[i] && (i + dest_len + 1) < size)
	{
		dst[dest_len + i] = src[i];
		++i;
	}
	dst[dest_len + i] = 0;
	return (src_len + dest_len);
}
/*
Agrega la cadena terminada en NULL src al final de dst. 
Agregará como máximo el tamaño - strlen(dest) - 1 byte,
el resultado terminado en NULL.
*/
