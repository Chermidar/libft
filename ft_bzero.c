/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:09:17 by chermida          #+#    #+#             */
/*   Updated: 2022/06/22 18:02:53 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (!s)
		return ;
	ft_memset(s, 0, n);
}
/*
Borra la data en el n bytes d memoria, empezando en la ubicación apuntada por s,
escribiendo 0 (bytes que contienen '\0') a esa area.
*/
