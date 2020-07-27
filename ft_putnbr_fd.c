/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 07:49:53 by student           #+#    #+#             */
/*   Updated: 2020/05/29 07:59:47 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_rec(long int nb, int fd)
{
	if (nb > 0)
	{
		ft_rec(nb / 10, fd);
		ft_putchar_fd(nb % 10 + '0', fd);
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	if (fd < 0)
		return ;
	nb = n;
	if (nb == 0)
		ft_putchar_fd('0', fd);
	else
	{
		if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			nb = nb * -1;
		}
		ft_rec(nb, fd);
	}
}
