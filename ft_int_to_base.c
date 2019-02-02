/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpauw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 11:56:12 by mpauw             #+#    #+#             */
/*   Updated: 2018/03/16 17:41:23 by mpauw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len_new(int len_to, unsigned long
		long int nbr)
{
	size_t	len_new;

	len_new = 1;
	if (nbr >= (unsigned long long int)len_to)
	{
		len_new++;
		nbr /= len_to;
		while ((unsigned long long int)ft_power(len_to, len_new - 1) <= nbr)
			len_new++;
	}
	return (len_new);
}

char			*ft_int_to_base(unsigned long long int nbr, const char *base_to)
{
	char	*conv;
	size_t	len_new;
	size_t	len_to;
	int		i;

	len_to = ft_strlen(base_to);
	len_new = get_len_new(len_to, nbr);
	conv = (char *)ft_alloc(sizeof(char) * (len_new + 1));
	*conv = *(base_to + (nbr / ft_power(len_to, len_new - 1)));
	len_new--;
	i = 1;
	while (len_new)
	{
		*(conv + i) = *(base_to + ((nbr % ft_power(len_to, len_new)) /
				ft_power(len_to, len_new - 1)));
		i++;
		len_new--;
	}
	*(conv + i) = 0;
	return (conv);
}
