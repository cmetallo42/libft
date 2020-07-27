/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 20:23:08 by student           #+#    #+#             */
/*   Updated: 2020/05/28 21:52:19 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*s2;

	len = ft_strlen(s1);
	if (!(s2 = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strlcpy(s2, s1, len + 1);
	return (s2);
}
