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

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	cpy = malloc(sizeof(char) * s1_len + 1);
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, s1, s1_len + 1);
	return (cpy);
}
/*
Devuelve un puntero a la nueva cadena que es un 
duplicado de la cadena s. La memoria para
lla nueva cadena es se obtiene con malloc(),
y se puede liberar con free()
*/
