/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 01:37:38 by student           #+#    #+#             */
/*   Updated: 2020/05/29 05:07:39 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*d1;
	unsigned char	*s1;

	d1 = (unsigned char*)dest;
	s1 = (unsigned char*)src;
	while (n != 0)
	{
		*d1 = *s1;
		d1++;
		if (*s1 == (unsigned char)c)
			return ((void*)d1);
		s1++;
		n--;
	}
	return (NULL);
}
