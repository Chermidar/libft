/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:24:06 by chermida          #+#    #+#             */
/*   Updated: 2022/06/22 18:10:20 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*src;
	size_t		i;

	src = (const char *)s;
	i = 0;
	while (i < n)
		if (*(src + i) == (char)c)
			return ((void *)src + i);
	return (NULL);
}
/*
Esca ea los n bytes iniciales de la memoria en
el area apuntada por s para la primera instancia de c.
Tanto c como los bytes del area apuntada por s
se interpretan como unsigned char.
*/
