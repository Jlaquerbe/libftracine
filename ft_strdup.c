/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaquerb <jlaquerb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:18:53 by jlaquerb          #+#    #+#             */
/*   Updated: 2022/08/10 16:49:24 by jlaquerb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (*dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc((sizeof(char)) * ft_strlen(src) + 1);
	if (!dest)
		return (0);
	*dest = ft_strcpy(dest, src);
	return (dest);
}
