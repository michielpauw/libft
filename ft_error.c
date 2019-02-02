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
	if (error == MEM_ERR)
		ft_putstr_fd("A memory error occurred.\n", 2);
	if (error == BASE_ERR)
		ft_putstr_fd("A base error occurred.\n", 2);
	if (error == ARGUMENT_ERR)
		ft_putstr_fd("Unexpected (amount of) arguments.\n", 2);
	if (error == VALUE_ERR)
		ft_putstr_fd("Unexpected value.\n", 2);
	ft_putstr_fd("Program will now terminate.\n", 2);
	exit(1);
}
