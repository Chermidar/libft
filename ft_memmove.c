/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:28:16 by chermida          #+#    #+#             */
/*   Updated: 2022/06/20 19:31:44 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*c;
	const char	*s;

	if (!dest || !src)
		return (NULL);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	c = (char *)dest;
	s = (const char *)src;
	while (n)
	{
		--n;
		c[n] = s[n];
	}
	return (dest);
}
