/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 06:49:11 by student           #+#    #+#             */
/*   Updated: 2020/05/29 05:24:45 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *arr1, const char *arr2, int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while (arr1[i] == arr2[i] && n > 1)
	{
		if (arr2[i] == '\0')
			return (0);
		i++;
		n--;
	}
	return ((unsigned char)arr1[i] - (unsigned char)arr2[i]);
}
