/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpauw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:52:21 by mpauw             #+#    #+#             */
/*   Updated: 2017/11/10 14:41:51 by mpauw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_sqrt(size_t nb)
{
	size_t	i;

	i = 0;
	while (i * i < nb)
	{
		if (i > 65535)
			return (0);
		i++;
	}
	if (i * i == nb)
		return (i);
	else
		return (0);
}
