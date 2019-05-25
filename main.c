/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:55:21 by lnkambul          #+#    #+#             */
/*   Updated: 2019/05/25 13:05:41 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

int		main()
{
	//int		i;
	//char	c;
	//char	*str;

	//i = 23;
	//c = 'y';
	//str = "boogle";
	//printf("i initialized to %i\n", i);
	//i = ft_strlen(str);
	//printf("length of str = %d characters.\n\n", i);

	char *s1;
	char *s2;
	s1 = "the quickening";
	s2 = "beseige the thrones of reverance";
	printf("s1: %s\ns2: %s\n", s1, s2);
	s2 = memmove(s2, s1, 1);
	printf("s1: %s\ns2: %s\n", s1, s2);

	return (0);
}	
