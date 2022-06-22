/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <chermida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:32:45 by chermida          #+#    #+#             */
/*   Updated: 2022/06/21 19:32:45 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ret;
	size_t	sum;

	sum = elsize * nelem;
	if (elsize != 0 && sum / elsize != nelem)
		return (NULL);
	ret = malloc(sum);
	if (ret)
		ft_bzero(ret, nelem * elsize);
	return (ret);
}
/*
Asigna memoria para una matriz de elementos nelem de bytes de tamaño cad uno
y devuelve un untero a la memoria asignada. La memoria se pone a cero.
Si nelem o elsize es 0, entonces calloc devuelve NULL o un valor de puntero
único que luego se puede pasar con éxito a free()
*/
