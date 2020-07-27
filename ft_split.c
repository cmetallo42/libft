/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 09:24:15 by student           #+#    #+#             */
/*   Updated: 2020/06/03 19:46:59 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		word_counter(const char *s, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			res++;
		i++;
	}
	return (res);
}

int		word_len(const char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

void	*free_all(char **str, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(str[j]);
		j++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		s1;
	int		s2;
	char	**res;

	i = 0;
	if (!s)
		return (NULL);
	s1 = word_counter(s, c);
	if (!(res = (char**)malloc(sizeof(char*) * (s1 + 1))))
		return (NULL);
	while (s1-- > 0)
	{
		while (*s == c && *s != '\0')
			s++;
		s2 = word_len(s, c);
		if (!(res[i] = (char*)malloc(sizeof(char) * (s2 + 1))))
			return (free_all(res, i));
		res[i] = ft_memcpy(res[i], (char *)s, s2);
		res[i][s2] = '\0';
		s += s2;
		i++;
	}
	res[i] = NULL;
	return (res);
}
