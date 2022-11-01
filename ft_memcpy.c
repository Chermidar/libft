/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:20:15 by chermida          #+#    #+#             */
/*   Updated: 2022/11/01 18:24:20 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	if (!dest || !src)
		return (dest);
	s = (const char *)src;
	d = (char *)dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		++i;
	}
	return (dest);
}
/*
Copia n bytes del area de memoria src al area
de memoria dest. El area de memoria no debe
superponerse. En caso que eso pase usar memmove().
*/
