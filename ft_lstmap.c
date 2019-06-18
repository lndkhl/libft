/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 17:10:09 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/18 17:28:59 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*n;
	t_list		*temp_l;
	t_list		*temp_n;

	n = ft_lstnew(lst->content, lst->content_size);
	temp_l = lst->next;
	temp_n = n;
	while (temp_l)
	{
		n->next = ft_lstnew(temp_l->content, temp_l->content_size);
		temp_l = temp_l->next;
	}
	while (temp_n)
	{
		temp_n = f(temp_n);
		temp_n = temp_n->next;
	}
	return n;
}
