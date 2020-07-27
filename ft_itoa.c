/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetallo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 02:03:51 by cmetallo          #+#    #+#             */
/*   Updated: 2020/05/31 21:35:58 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_size(unsigned int nb)
{
	unsigned int	s;

	s = 0;
	while (nb >= 10)
	{
		nb /= 10;
		++s;
	}
	return (s + 1);
}

char		*ft_itoa(int nbr)
{
	char			*str;
	unsigned int	nb;
	unsigned int	i;
	unsigned int	s;

	if (nbr < 0)
		nb = (unsigned int)(nbr * -1);
	else
		nb = (unsigned int)nbr;
	s = (unsigned int)ft_size(nb);
	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * (s + 1 + (nbr < 0 ? 1 : 0)))))
		return (0);
	if (nbr < 0 && (str[i] = '-'))
		s++;
	i = s - 1;
	while (nb >= 10)
	{
		str[i--] = (char)(nb % 10 + 48);
		nb /= 10;
	}
	str[i] = (char)(nb % 10 + 48);
	str[s] = '\0';
	return (str);
}
