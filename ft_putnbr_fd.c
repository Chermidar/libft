/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:11:31 by chermida          #+#    #+#             */
/*   Updated: 2022/07/27 12:11:31 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	rec(long n, int fd)
{
	if (n / BASE_DEC)
	{
		rec(n / 10, fd);
		rec(n % 10, fd);
	}
	if (n < BASE_DEC)
		ft_putchar_fd(n + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = (long)n;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar_fd('-', fd);
	}
	rec(nbr, fd);
}
/*
Envía el número ’n’ al file descriptor dado.
*/
