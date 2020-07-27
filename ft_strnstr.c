/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 06:06:14 by student           #+#    #+#             */
/*   Updated: 2020/05/29 03:39:36 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!*lit)
		return ((char *)big);
	j = ft_strlen(lit);
	while (ft_strncmp(&big[i], lit, j) != 0)
	{
		if (!big[i] || i >= (len - j))
			return (NULL);
		i++;
	}
	if (j > len)
		return (NULL);
	return ((char *)(&big[i]));
}
