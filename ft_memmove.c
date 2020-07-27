/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 15:08:28 by student           #+#    #+#             */
/*   Updated: 2020/05/31 21:11:48 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst1;
	unsigned char		*src1;
	size_t				i;

	i = 1;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (src1 < dst1)
	{
		while (i <= len)
		{
			dst1[len - i] = src1[len - i];
			i++;
		}
	}
	else
		while (len != 0)
		{
			*dst1++ = *src1++;
			len--;
		}
	return (dst);
}
