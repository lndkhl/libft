/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:44:24 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/04 17:20:03 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	char	*n;
	
	i = 0;
	if (!s)
		return (NULL);
	n = ft_strdup(s);
	while (n[i] != '\0')
	{
		n[i] = (*f)(n[i]);
		i++;
	}
	return (n);
}
