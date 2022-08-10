/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaquerb <jlaquerb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:54:42 by jlaquerb          #+#    #+#             */
/*   Updated: 2022/08/10 16:51:32 by jlaquerb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	index;
	size_t	indexbis;

	index = 0;
	indexbis = 0;
	while (dest[index] && index < size)
	{
		index++;
	}
	while (src[indexbis] && indexbis + index + 1 < size)
	{
		dest[index + indexbis] = src[indexbis];
		indexbis++;
	}
	if (index != size)
		dest[index + indexbis] = '\0';
	return ((size_t)ft_strlen(src) + index);
}
