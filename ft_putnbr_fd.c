/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaquerb <jlaquerb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:25:15 by jlaquerb          #+#    #+#             */
/*   Updated: 2022/08/10 16:48:29 by jlaquerb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (fd < 0)
		return ;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		if (nb == -2147483648)
		{
			write (fd, "2147483648", 10);
			return ;
		}
		nb = -nb;
	}
	if (nb < 10)
		ft_putchar_fd(nb + 48, fd);
	else if (nb > 9)
	{
		ft_putnbr_fd((nb / 10), fd);
		ft_putchar_fd(nb % 10 + 48, fd);
	}
}
