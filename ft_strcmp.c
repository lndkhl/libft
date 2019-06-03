/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 15:40:14 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/03 17:05:42 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_strcmp(const char *s1, const char *s2)
{
	unsigned int		i;
	unsigned char		*a;
	unsigned char		*b;
	
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	if (!a && !b)
		return (0);
	while (a && b)
	{
		if (a[i] > b[i])
			return (1);
		else if (a[i] < b[i])
			return (-1);
		i++;
	}
	if (!a && b)
		return (-1);
	else if (a && !b)
		return (1);
	return (0);
}
