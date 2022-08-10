/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaquerb <jlaquerb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:49:40 by jlaquerb          #+#    #+#             */
/*   Updated: 2022/08/10 16:51:56 by jlaquerb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	size;

	if (!*s2)
		return ((char *)s1);
	size = ft_strlen(s2);
	while (*s1 && len >= size)
	{
		if (*s1 == *s2 && ft_strncmp(s1, s2, size) == 0)
			return ((char *)s1);
		s1++;
		len--;
	}
	return (NULL);
}
