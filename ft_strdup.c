/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:16:47 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/02 17:33:20 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	int		i;
	char	*d;

	i = 0;

	while (s[i] != '\0')
		i++;
	d = (char *)malloc(sizeof(char) * (i + 1));
	if (!d)
		return (NULL);
	d[i--] = '\0';
	while (i >= 0)
	{
		d[i] = s[i];
		i--;
	}
	return (d);
}
