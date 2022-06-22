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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	k;
	unsigned int	j;
	unsigned int	i;

	k = 0;
	j = 0;
	i = 0;
	while (dest[k])
		k++;
	while (src[j])
		j++;
	if (size <= k)
		return (j + size);
	while (src[i] && (k + i) < (size -1))
	{
		dest[k + i] = src[i];
		i++;
	}
	dest[k + i] = 0;
	return (j + k);
}
/*
Agrega la cadena terminada en NULL src al final de dst. 
Agregará como máximo el tamaño - strlen(dest) - 1 byte,
el resultado terminado en NULL.
*/
