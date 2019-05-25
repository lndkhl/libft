/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 09:00:44 by lnkambul          #+#    #+#             */
/*   Updated: 2019/05/25 09:26:54 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int i;
	char *s;
	char *d;

	i = 0;
	s = (char *)src;
	d = (char *)dst;
	while ( i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
