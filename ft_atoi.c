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

int	ft_atoi(const char *nptr)
{
	int	c;
	int	s;
	int	nb;

	nb = 0;
	c = 0;
	s = 1;
	while ((str[c] >= 9
			&& str[c] <= 13) || str[c] == 32)
		c++;
	if (str[c] == 45 || str[c] == 43)
	{
		if (str[c] == 45)
			s *= -1;
		c++;
	}
	while (str[c] >= 48 && str[c] <= 57)
	{
		nb = (str[c] - 48) + (nb * 10);
		c++;
	}
	return (nb * s);
}
/*
Convierte la porción incial de un string apuntada por nptr a int
tiene un comportamiento parecido a strtol(nptr, NULL, 10)
exeptuando que atoi no detecta error
*/