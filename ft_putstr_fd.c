/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:05:04 by chermida          #+#    #+#             */
/*   Updated: 2022/07/27 12:05:04 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	size_t  i;

	if (!s)
		return ;
	i = ft_strlen(s);
	write(fd, s, i);
}
/*
Envía la string ’s’ al file descriptor
especificado.
*/
