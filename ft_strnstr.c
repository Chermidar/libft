/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:01:27 by chermida          #+#    #+#             */
/*   Updated: 2022/11/01 18:32:17 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	l;
	size_t			i;

	i = 0;
	l = ft_strlen(little);
	if (!l)
		return ((char *)big);
	while (big[i] && (i + l - 1) < len)
	{
		if (!ft_strncmp((big + i), little, l))
			return ((char *)big + i);
		++i;
	}
	return ((char *)0);
}
/*
Localiza la primera ocurrencia de la cadena terminada en NULL
little terminada en la cadena big donde no hay mas caracteres
que se busquen. Los caracteres que aparecen despues de un
caracter NULL no se buscan. Dado que la función strnstr()
es una API específica de FreeBSD, solo debe uutilizarse cuando
la portabilidad no es una preocupación
*/
