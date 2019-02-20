/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpauw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 17:40:55 by mpauw             #+#    #+#             */
/*   Updated: 2018/03/16 17:40:56 by mpauw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_realloc(void **s, size_t old_size, size_t new_size)
{
	size_t			i;
	unsigned char	*m;

	m = *(unsigned char **)s;
	if (!(*(unsigned char **)s =
				(unsigned char *)malloc(sizeof(unsigned char) * new_size)))
		return ;
	i = 0;
	while (i < old_size)
	{
		(*(unsigned char **)s)[i] = m[i];
		i++;
	}
	free(m);
}

void	*ft_realloc_2(void *s, size_t old_size, size_t new_size)
{
	unsigned char	*m;

	m = (unsigned char *)ft_alloc(sizeof(unsigned char) * new_size);
	ft_memcpy(m, (unsigned char *)s, old_size);
	free(s);
	return ((void *)m);
}
