/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 09:00:44 by lnkambul          #+#    #+#             */
/*   Updated: 2019/05/25 11:27:17 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;
	int j;
	char *s;
	char *d;

	i = 0;
	j = (int)n;
	s = (char *)src;
	d = (char *)dst;
	while (i < j)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
