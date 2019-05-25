/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:27:15 by lnkambul          #+#    #+#             */
/*   Updated: 2019/05/25 11:50:15 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	char	*a;
	int		d;

	a = (char *)b;
	d = (int)len;
	a[--d] = '\n';
	while (d >= 0)
		a[d--] = c;
	return (a);
}
