/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_ext.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:21:44 by lnkambul          #+#    #+#             */
/*   Updated: 2019/05/21 15:57:32 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_ext.h"

size_t		ft_strlen(const char* s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char*		ft_strcpy(char* dst, const char* src)
{
	int		i;
	int		j;

	i = (int)ft_strlen(src);
	j = (int)ft_strlen(dst);
	if (i <= j)
		j = 0;
		while (j < i)
		{
			dst[j] = src[j];
			j++;
		}
}

int		ft_toupper(int	n)
{
	if (n > 97 && n < 123)
		return (n - 32);
	else
		return n;
}

int		ft_tolower(int	n)
{
	if (n > 64 && n < 91)
		return (n + 32);
	else
		return n;
}


