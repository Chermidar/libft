/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:24:36 by chermida          #+#    #+#             */
/*   Updated: 2022/06/30 19:14:01 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	substr_len;
	size_t	str_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if ((size_t)start > str_len)
		return (ft_strdup(""));
	substr_len = str_len - start;
	if (substr_len < len)
		len = substr_len;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (ret)
		ft_strlcpy(ret, (s + start), len + 1);
	return (ret);
}
/*
Reserva (con malloc(3)) y devuelve una substring de
la string ’s’.
La substring empieza desde el índice ’start’ y
tiene una longitud máxima ’len’.
*/