/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <chermida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 22:05:32 by chermida          #+#    #+#             */
/*   Updated: 2022/06/17 22:05:32 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || \
			c == '\f' || c == '\r' || c == ' ');
}

static char	*skip_space(char *s)
{
	while (is_space(*s))
		++s;
	return (s);
}

static char	*skip_get_sign(char *s, int *sign)
{
	*sign = 1;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			*sign *= -1;
		++s;
	}
	return (s);
}

int	ft_atoi(const char *nptr)
{
	char	*s;
	int		ret;
	int		sign;

	if (!nptr)
		return (0);
	s = (char *)nptr;
	ret = 0;
	s = skip_space(s);
	s = skip_get_sign(s, &sign);
	while (ft_isdigit(*s))
	{
		ret = (ret * 10) + (*s - '0');
		++s;
	}
	return (ret * sign);
}
/*
Convierte la porción incial de un string apuntada por nptr a int
tiene un comportamiento parecido a strtol(nptr, NULL, 10)
exeptuando que atoi no detecta error
*/
