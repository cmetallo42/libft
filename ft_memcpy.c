/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 01:25:58 by student           #+#    #+#             */
/*   Updated: 2020/05/27 04:43:18 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	unsigned char	*d1;
	unsigned char	*s1;
	size_t			i;

	d1 = (unsigned char*)d;
	s1 = (unsigned char*)s;
	i = 0;
	if (d == NULL && s == NULL)
		return (NULL);
	while (i != n)
	{
		d1[i] = s1[i];
		i++;
	}
	return (d1);
}
