/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:19:40 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/04 17:26:18 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*n;

	n = NULL;
	n = malloc(size);
	if (n)
	{
		ft_bzero(n, size);
		return (n);
	}
	return (NULL);
}
