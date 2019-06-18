/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:03:52 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/18 15:32:07 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*temp;

	temp = NULL;
	while ((*alst) != NULL)
	{
		temp = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		ft_memdel((void **)&(*alst));
		*alst = temp;
	}
	
}
