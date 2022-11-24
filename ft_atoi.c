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
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	ret;
	int		sign;

	i = 0;
	ret = 0;
	sign = 1;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		ret = (ret * 10) + (str[i] - '0');
		if (ret > LONG_MAX && sign == -1)
			return (0);
		if (ret > LONG_MAX && sign == 1)
			return (-1);
		i++;
	}
	return (ret * sign);
}

/*
Convierte la porción incial de un string apuntada por nptr a int
tiene un comportamiento parecido a strtol(nptr, NULL, 10)
exeptuando que atoi no detecta error
*/
