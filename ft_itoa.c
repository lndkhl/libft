/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:18:16 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/05 18:24:53 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*ft_itoa(int i)
{
	char				*r;
	int					c;
	int					a;

	c = 0;
	a = i;
	if (a < 0)
	{
		a *= -1;
		c++;
	}	
	while (a > 0)
	{
		a = a / 10;
		c++;
	}
	r = (char *)malloc(sizeof(char) * (c + 1));
	if (!r)
		return (NULL);
	ft_strclr(r);
	c--;
	a = i;
	if (i < 0)
	{
		r[0] = '-';
		a *= -1;
	}
	while (a > 0)
	{
		r[c--] = a % 10;
		a = a / 10;
	}
	return (r);
}
