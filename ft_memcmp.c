/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:03:08 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/12 14:39:25 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned int	i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	if ((!*a && *b) || (!*b && *a))
		return ((int) *a - *b);
	while ((n > 0) && (a[i] == b[i]))
	{
		i++;
		n--;
	}
	if (i == 0 || n == 0)
		return (0);
	return ((int)(a[i] - b[i]));
}
