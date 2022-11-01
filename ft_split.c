/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 19:38:35 by chermida          #+#    #+#             */
/*   Updated: 2022/11/01 18:38:15 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*skip_sep(const char *s, char sep)
{
	while (*s && *s == sep)
		++s;
	return (s);
}

static int	count_word(const char *s, char sep)
{
	int	i;

	i = 0;
	s = skip_sep(s, sep);
	while (*s)
	{
		++i;
		while (*s && *s != sep)
			++s;
		s = skip_sep(s, sep);
	}
	return (i);
}

static const char	*create_str(const char *s, char sep, char **ret)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != sep)
		++i;
	*ret = ft_substr(s, 0, i);
	return (s + i);
}

static void	free_all(char **tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		++i;
	}
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	int				word_num;
	int				i;
	char			**ret;

	if (!s)
		return (NULL);
	word_num = count_word(s, c);
	ret = (char **)malloc(sizeof(char *) * (word_num + 1));
	if (!ret)
		return (NULL);
	ret[word_num] = NULL;
	s = skip_sep(s, c);
	i = 0;
	while (i < word_num)
	{
		s = create_str(s, c, ret + i);
		if (ret[i] == NULL)
		{
			free_all(ret, i);
			return (NULL);
		}
		s = skip_sep(s, c);
		++i;
	}
	return (ret);
}
/*
Reserva (utilizando malloc(3)) un array de strings
resultante de separar la string ’s’ en substrings
utilizando el caracter ’c’ como delimitador. El
array debe terminar con un puntero NULL.
*/
