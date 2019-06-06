/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:43:59 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/06 14:51:36 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			l;
	unsigned char	*s;
	unsigned char	*d;

	l = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while ((l < len) && (src || dst))
	{
		d[l] = s[l];
		l++;
	}
	return (dst);
}
