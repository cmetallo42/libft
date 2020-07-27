/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 07:17:37 by student           #+#    #+#             */
/*   Updated: 2020/05/28 04:05:46 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (str[i] != '\0')
		i++;
	while (str[i] != ch)
	{
		if (i == -1)
			return (NULL);
		i--;
		z++;
	}
	return ((char *)&str[i]);
}
