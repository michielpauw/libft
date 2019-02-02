/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpauw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:39:14 by mpauw             #+#    #+#             */
/*   Updated: 2018/03/13 17:16:39 by mpauw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_dec(int nbr, int len_from)
{
	int len_nbr;
	int	dec;
	int	sign;
	int	digit;

	sign = nbr < 0 ? -1 : 1;
	nbr = sign * nbr;
	dec = 0;
	len_nbr = ft_numlen(nbr);
	while (len_nbr--)
	{
		digit = nbr % ft_power(len_from, len_nbr + 1);
		dec = dec + digit * ft_power(len_from, len_nbr);
		nbr++;
	}
	return (sign * dec);
}

static char	*get_new(int nbr, int len_to)
{
	char	*conv;
	size_t	len_new;
	int		sign;
	int		i;

	sign = nbr < 0 ? -1 : 1;
	i = nbr < 0 ? 1 : 0;
	nbr = nbr * sign;
	len_new = 1;
	while (ft_power(len_to, len_new) <= (size_t)nbr)
		len_new++;
	conv = (char *)ft_alloc(sizeof(char) * (len_new + 1 + i));
	if (sign < 0)
		*conv = '-';
	while (len_new)
	{
		*(conv + i) = ((nbr % ft_power(len_to, len_new)) /
				ft_power(len_to, len_new - 1)) + '0';
		i++;
		len_new--;
	}
	*(conv + i) = 0;
	return (conv);
}

char		*ft_convert_num_base(int nbr, size_t len_from, size_t len_to)
{
	int	dec;

	if (len_from < 2 || len_to < 2)
		ft_error(BASE_ERR);
	dec = get_dec(nbr, len_from);
	return (get_new(dec, len_to));
}
