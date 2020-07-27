/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 22:02:49 by student           #+#    #+#             */
/*   Updated: 2020/05/28 22:20:41 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	z;

	i = ft_strlen(dst);
	z = i;
	if (!(*src))
		return (i);
	if (size <= i)
		return (size + ft_strlen(src));
	while (*src)
	{
		if (i + 1 < size)
		{
			dst[i] = *src;
			z++;
		}
		src++;
		i++;
	}
	dst[z] = '\0';
	return (i);
}
