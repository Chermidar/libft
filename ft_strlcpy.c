/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:14:52 by chermida          #+#    #+#             */
/*   Updated: 2022/06/22 18:23:13 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	while (i + 1 < size && src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	while (src[i])
		++i;
	return (i);
}
/*
Copia hasta el tamaño 1 los caracteres de la cadena terminada en NULL src
a dest, el resutado terminado en NULL.
*/
