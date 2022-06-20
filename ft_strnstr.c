/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:01:27 by chermida          #+#    #+#             */
/*   Updated: 2022/06/20 18:01:29 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(little);
	if (!j)
		return ((char *)big);
	while (big[i] && (i + j - 1) < len)
	{
		if (!ft_strncmp((big + i), little, j))
			return ((char *)big + i);
		++i;
	}
	return (NULL);
}
