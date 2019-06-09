/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:03:08 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/09 18:39:56 by lnkambul         ###   ########.fr       */
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
	while ((n > 0) && (a[i] == b[i]))
	{
		i++;
		n--;
	}
	if (i == 0)
		return (0);
	return ((int)(a[i] - b[i]));
}
