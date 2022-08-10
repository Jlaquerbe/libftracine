/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaquerb <jlaquerb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:26:09 by jlaquerb          #+#    #+#             */
/*   Updated: 2022/08/10 16:48:16 by jlaquerb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!(dst) && !(src))
		return (NULL);
	i = 0;
	if ((unsigned char *)dst < (const unsigned char *)src)
	{
		while (len--)
		{
			((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
			i++;
		}
	}
	else
		while (len--)
			((unsigned char *)dst)[len] = ((const unsigned char *)src)[len];
	return (dst);
}
