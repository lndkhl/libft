/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:55:21 by lnkambul          #+#    #+#             */
/*   Updated: 2019/05/22 14:54:04 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main()
{
	int		i;
	//char	c;
	char	*str;

	i = 23;
	//c = 'y';
	str = "boogle";
	printf("i initialized to %i\n", i);
	i = ft_strlen(str);
	printf("length of str = %d characters.", i);
	return (0);
}	
