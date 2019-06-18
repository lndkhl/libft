/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 15:14:08 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/18 13:21:37 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*newlist;

	newlist = NULL;
	newlist = malloc(sizeof(t_list));
	if (!content)
	{
		newlist->content = NULL;
		newlist->content_size = 0;
	}
	else
	{
		newlist->content = (void *)ft_memalloc(content_size);
		newlist->content = (void *)content;
		newlist->content_size = content_size;
	}
	newlist->next = NULL;
	return (newlist);
}
