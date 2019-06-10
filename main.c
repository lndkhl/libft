/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:38:23 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/10 17:38:18 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main()
{
	char	*i = ft_itoa(-2147483648);
	char 	*j = ft_itoa(156);
	char	*k = ft_itoa(-0);
	char	*r = "8";
	int		a;
	char	*s = " aefea af dfgf asssw dfg ";
	char	**ar = ft_strsplit(s, ' ');
	
	a = 0;
	while (ar[a])
		ft_putendl(ar[a++]);
	ft_putendl(i);
	ft_putendl(j);
	ft_putendl(k);
	a = ft_atoi(i);
	ft_putnbr(a);
	ft_putstr("\n\n");
	ft_putnbr((int)ft_strlen(r));
	return (0);
}
