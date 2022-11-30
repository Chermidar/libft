/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 09:43:34 by chermida          #+#    #+#             */
/*   Updated: 2022/07/13 09:43:34 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ret;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	ret = (char *)malloc(sizeof(char) * (i + 1));
	if (ret)
	{
		ret[i] = 0;
		i = 0;
		while (s[i])
		{
			ret[i] = f(i, s[i]);
			++i;
		}
	}
	return (ret);
}
/*
A cada carácter de la string ’s’, aplica la
función ’f’ dando como parámetros el índice de cada
carácter dentro de ’s’ y el propio carácter. Genera
una nueva string con el resultado del uso sucesivo
de ’f’
Valor devuelto:
La string creada tras el correcto uso de ’f’ sobre
cada carácter.
NULL si falla la reserva de memoria.
*/
