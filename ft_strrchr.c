/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaquerb <jlaquerb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:22:13 by jlaquerb          #+#    #+#             */
/*   Updated: 2022/08/10 16:52:01 by jlaquerb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	pos;
	char	*a;

	a = (char *)s;
	i = 0;
	pos = 0;
	while (a[i] != '\0')
	{
		if ((unsigned char)a[i] == (unsigned char)c)
			pos = i;
		i++;
	}
	if (pos > 0 || (unsigned char)a[0] == (unsigned char) c)
		return (&a[pos]);
	if (!a[i] && !c)
		return (&a[i]);
	return (NULL);
}
