/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaquerb <jlaquerb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:26:34 by jlaquerb          #+#    #+#             */
/*   Updated: 2022/08/10 16:48:12 by jlaquerb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (dest == src || n == 0)
	{
		return (dest);
	}
	if (!src && !dest)
	{
		return (0);
	}
	d = (char *)dest;
	s = (const char *)src;
	while (n != '\0')
	{
		n--;
		d[n] = s[n];
	}
	return (dest);
}
