/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 09:24:31 by student           #+#    #+#             */
/*   Updated: 2020/05/29 09:40:48 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_checking(const char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	ft_findlen(const char *s, const char *set)
{
	size_t		len;
	size_t		r;
	int			i;

	len = ft_strlen(s);
	r = len;
	i = 0;
	while (s[i] && ft_checking(s[i], set) && r > 0)
	{
		r--;
		i++;
	}
	len--;
	while (s[len] && ft_checking(s[len], set) && r > 0)
	{
		r--;
		len--;
	}
	return (r);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t		newlen;
	char		*r;
	char		*d;

	if (!s1 || !set)
		return (NULL);
	newlen = ft_findlen(s1, set);
	r = (char*)malloc(sizeof(char) * (newlen + 1));
	if (!r)
		return (NULL);
	d = r;
	if (newlen > 0)
	{
		while (*s1 && ft_checking(*s1, set))
			s1++;
		while (newlen--)
		{
			*r = *s1;
			r++;
			s1++;
		}
	}
	*r = '\0';
	return (d);
}
