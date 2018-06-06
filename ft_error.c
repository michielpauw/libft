/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpauw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 13:56:14 by mpauw             #+#    #+#             */
/*   Updated: 2018/03/26 13:57:11 by mpauw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(int error)
{
	if (error == 10)
		ft_putstr_fd("Base length must be at least 2\n", 2);
	if (error == 2)
		ft_putstr_fd("Error whilst allocating memory\n", 2);
	exit(1);
}
