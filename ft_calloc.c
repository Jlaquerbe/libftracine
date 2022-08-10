/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaquerb <jlaquerb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:30:26 by jlaquerb          #+#    #+#             */
/*   Updated: 2022/08/10 16:47:37 by jlaquerb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tmp;

	tmp = (void *)malloc(nmemb * size);
	if (tmp == 0)
	{
		return (NULL);
	}
	ft_bzero(tmp, nmemb * size);
	return ((void *)tmp);
}
