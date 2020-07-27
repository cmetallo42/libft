/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 05:46:36 by student           #+#    #+#             */
/*   Updated: 2020/05/31 21:33:58 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int st, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (st > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - st < len)
		len = ft_strlen(s) - st;
	if (!(str = ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	while (i < len)
	{
		str[i] = s[st + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
