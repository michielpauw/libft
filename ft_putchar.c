/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpauw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:10:31 by mpauw             #+#    #+#             */
/*   Updated: 2018/03/13 20:15:13 by mpauw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t			get_amount_bytes(wchar_t c)
{
	size_t	length;

	length = 1;
	while (c /= 2)
		length++;
	if (length < 8)
		return (1);
	return ((length + 3) / 5);
}

static unsigned char	get_char(wchar_t *c, size_t index, size_t length)
{
	unsigned char	to_return;
	unsigned int	pow;
	size_t			i;

	i = 0;
	to_return = 0;
	while (index == 0 && i < length - 1)
		to_return += ft_power(2, 6 - i++);
	to_return += 128;
	i += 2;
	while (i < 8)
	{
		pow = ft_power(2, (length - 1 - index) * 6 + (7 - i));
		if ((uintmax_t)(*c) >= pow)
		{
			*c -= pow;
			to_return += ft_power(2, 7 - i);
		}
		i++;
	}
	return (to_return);
}

void					ft_putchar(wchar_t c)
{
	size_t			i;
	size_t			length;
	unsigned char	uc;

	i = 0;
	if (c <= 127)
	{
		write(1, &c, 1);
		return ;
	}
	length = get_amount_bytes(c);
	while (i < length)
	{
		uc = get_char(&c, i++, length);
		write(1, &uc, 1);
	}
}
