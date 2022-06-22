/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:01:27 by chermida          #+#    #+#             */
/*   Updated: 2022/06/22 18:32:22 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(little);
	if (!j)
		return ((char *)big);
	while (big[i] && (i + j - 1) < len)
	{
		if (!ft_strncmp((big + i), little, j))
			return ((char *)big + i);
		++i;
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
