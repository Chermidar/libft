/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:20:15 by chermida          #+#    #+#             */
/*   Updated: 2022/11/23 16:09:45 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	const char	*src_cpy;
	char		*dest_cpy;

	src_cpy = (const char *)src;
	dest_cpy = (char *)dest;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		*dest_cpy = *src_cpy;
		dest_cpy++;
		src_cpy++;
		n--;
	}
	return (dest);
}
/*
Copia n bytes del area de memoria src al area
de memoria dest. El area de memoria no debe
superponerse. En caso que eso pase usar memmove().
*/
