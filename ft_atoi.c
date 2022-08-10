/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaquerb <jlaquerb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:45:02 by jlaquerb          #+#    #+#             */
/*   Updated: 2022/08/10 16:57:30 by jlaquerb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	atoi;
	int	n;

	atoi = 0;
	n = 1;
	while (*str == '\t' || *str == '\v' || *str == '\n' || *str == '\r'
		|| *str == '\f' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			n = n * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str)
	{
		atoi = atoi * 10 + *str - 48;
		str++;
		if (atoi > INT_MAX / 10 && *str - 48 > (INT_MAX % 10) - (n - 1) / 2)
			return (- (n + 1) / 2);
	}
	return (atoi * n);
}
