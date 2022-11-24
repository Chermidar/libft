/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:01:27 by chermida          #+#    #+#             */
/*   Updated: 2022/11/23 14:49:47 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *long_str, const char *short_str, size_t len)
{
	size_t	pos;
	size_t	i;

	if ((!long_str || !short_str) && len == 0)
		return (NULL);
	if (!*short_str)
		return ((char *)long_str);
	pos = 0;
	while (long_str[pos] && pos < len)
	{
		if (long_str[pos] == short_str[0])
		{
			i = 1;
			while (short_str[i] && long_str[pos + i] == short_str[i]
				&& (pos + i) < len)
				++i;
			if (!short_str[i])
				return ((char *)&long_str[pos]);
		}
		++pos;
	}
	return (NULL);
}
/*
Localiza la primera ocurrencia de la cadena terminada en NULL
little terminada en la cadena big donde no hay mas caracteres
que se busquen. Los caracteres que aparecen despues de un
caracter NULL no se buscan. Dado que la función strnstr()
es una API específica de FreeBSD, solo debe uutilizarse cuando
la portabilidad no es una preocupación
*/
