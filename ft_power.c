/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpauw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:47:07 by mpauw             #+#    #+#             */
/*   Updated: 2018/03/14 14:50:39 by mpauw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long long int	ft_power(unsigned long long int nb, size_t power)
{
	if (power == 0)
		return (1);
	if (power > 1)
		nb = nb * ft_power(nb, power - 1);
	return (nb);
}
