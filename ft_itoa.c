/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpauw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 08:28:30 by mpauw             #+#    #+#             */
/*   Updated: 2018/03/16 17:41:12 by mpauw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	recur(long long int nb, char **c, int i)
{
	if (nb < 10)
	{
		*(*c + i) = nb + '0';
		return (0);
	}
	else
	{
		recur(nb / 10, c, i - 1);
		*(*c + i) = nb % 10 + '0';
		return (0);
	}
	return (0);
}

char		*ft_itoa(long long int n)
{
	int		neg;
	int		length;
	char	*to_return;

	length = ft_numlen(n);
	neg = n < 0 ? 1 : 0;
	if (!(to_return = (char *)malloc(sizeof(char) * (length + neg + 1))))
		return (NULL);
	if (n < 0)
	{
		*to_return = '-';
		if (n == INT_MIN)
			return (to_return = ft_strdup("-2147483648"));
		else if (n == LONG_MIN)
			return (to_return = ft_strdup("-9223372036854775808"));
		n = -n;
	}
	recur(n, &to_return, length + neg - 1);
	*(to_return + length + neg) = 0;
	return (to_return);
}
