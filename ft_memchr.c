/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 04:12:51 by student           #+#    #+#             */
/*   Updated: 2020/05/29 05:12:13 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t				i;
	const unsigned char	*arr1;

	arr1 = (unsigned char *)arr;
	i = 0;
	while (i < n)
	{
		if (*arr1 == (unsigned char)c)
			return ((void *)arr1);
		i++;
		arr1++;
	}
	return (NULL);
}
