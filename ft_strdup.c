/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <chermida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:33:22 by chermida          #+#    #+#             */
/*   Updated: 2022/06/21 19:33:22 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	char	*ret;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	ret = (char *)malloc(sizeof(char) * (size + 1));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s, size + 1);
	return (ret);
}
/*
Devuelve un puntero a la nueva cadena que es un 
duplicado de la cadena s. La memoria para
lla nueva cadena es se obtiene con malloc(),
y se puede liberar con free()
*/
