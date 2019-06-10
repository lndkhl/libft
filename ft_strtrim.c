/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:55:59 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/10 17:23:26 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(const char *s)
{
	unsigned int	ws;
	unsigned int	i;
	unsigned int	j;
	char			*n;

	if (!s)
		return (NULL);
	if (s[0] == '\0')
		return ((char *)s);
	ws = 0;
	i = 0;
	while (s[i] == 32 || s[i] == '\t' || s[i] == '\n')
	{
		i++;
		ws++;
	}
	j = (unsigned int)ft_strlen(s) - 1;
	while ((s[j] == 32 || s[j] == '\t' || s[j] == '\n') && (j > i))
	{
		j--;
		ws++;
	}
	j = (unsigned int)ft_strlen(s) - ws;
	n = ft_strsub(s, i, j);
	if (!n)
		return (NULL);
	return (n);
}
