/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpauw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 07:56:21 by mpauw             #+#    #+#             */
/*   Updated: 2018/01/11 11:30:02 by mpauw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = (t_list *)ft_alloc(sizeof(t_list));
	list->next = NULL;
	if (!content)
	{
		list->content = NULL;
		list->content_size = 0;
	}
	else
	{
		list->content = (void *)ft_alloc(content_size);
		list->content = ft_memmove(list->content, content, content_size);
		list->content_size = content_size;
	}
	return (list);
}
