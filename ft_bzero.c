/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:48:48 by lnkambul          #+#    #+#             */
/*   Updated: 2019/05/25 11:45:33 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bzero(void *s, size_t n)
{
	int		i;
	int		z;
	char	*a;

	i = 0;
	a = (char *)s;
	z = (int)n;
	z *= 8;
	while (z > 0)
	{
		a[i++] = 0;
		z--;
	}
}
