/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 07:17:01 by student           #+#    #+#             */
/*   Updated: 2020/05/29 07:24:46 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*d;
	unsigned int	i;
	size_t			slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	i = 0;
	if (!(d = ft_calloc(sizeof(char), slen + 1)))
		return (NULL);
	while (s[i])
	{
		d[i] = (*f)(i, s[i]);
		i++;
	}
	return (d);
}
