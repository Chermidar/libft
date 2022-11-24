/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:28:16 by chermida          #+#    #+#             */
/*   Updated: 2022/11/23 16:11:20 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*src_cpy;
	char		*dest_cpy;

	src_cpy = (const char *)src;
	dest_cpy = (char *)dest;
	if (dest == '\0' && src == '\0')
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		while (n)
		{
			dest_cpy[n - 1] = src_cpy[n - 1];
			n--;
		}
	}
	return (dest);
}
/*
Copia n bytes del area de memoria src al area de
memoria dest. El area de memoria puede superponerse: la
copia toma lugar como si los bytes en src se copiaran 
primero en un matriz temporal que no superpone a 
src o dest, y los bytes luego se copian de la matriz temporal a dest
*/
