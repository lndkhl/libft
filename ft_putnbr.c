/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 15:36:57 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/10 14:22:44 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr(int n)
{
	char		c;
	
	if (n > 9)
		ft_putnbr(n / 10);
	if (n < 0)
	{
		long	i;
		i = (long)n;
		write (1, "-", 1);
		i *= -1;
		if (i == 2147483648)
		{
			write (1, "2", 1);
			i = 147483648;
		}
		ft_putnbr(i);
	}
	c = n % 10 + '0';
	write(1, &c, 1);
}