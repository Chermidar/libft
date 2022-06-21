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

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;
	size_t	sum;

	sum = size * nmemb;
	if (size != 0 && sum / size != nmemb)
		return (NULL);
	ret = malloc(sum);
	if (ret)
		ft_bzero(ret, nmemb * size);
	return (ret);
}
