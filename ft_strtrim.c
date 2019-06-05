/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:55:59 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/05 17:09:23 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(const char *s)
{
	unsigned int	w;
	unsigned int	i;
	unsigned int	j;
	char			*n;

	if (!s)
		return (NULL);
	w = 0;
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
		w++;
	}
	j = (unsigned int)ft_strlen(s);
	if (s[i] != '\0')
	{
		j--;
		while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && (j > i))
		{
			j--;
			w++;
		}	
		j = (unsigned int)ft_strlen(s) - w;
	}
	n = ft_strnew((size_t)j);
	if (!n)
		return (NULL);
	w = 0;
	while (w < j)
		n[w++] = s[i++];
	return (n);
}
