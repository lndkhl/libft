/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:51:50 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/12 18:43:36 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_wordcount(const char *i, char c)
{
	size_t			a;
	char			*p;

	a = 0;
	p = (char *)i;
	while (*p++)
	{
		if (*p != c && (*(p + 1) == '\0' || *(p + 1) == c))
			a++;
	}
	return (a);
}

char				**ft_poparray(char **ptr, char *p, char c)
{
	size_t			i;

	while (*p++)
	{
		if (*p != c)
		{
			i = 0;
			while (p[i] != c)
				i++;
			if (!(*ptr++ = ft_strsub(p, *p, i)))
				return (NULL);
			while (i-- > 0)
				p += i;
		}
	}
	*ptr = NULL;
	return (ptr);
}

char				**ft_strsplit(const char *s, char c)
{
	char			**arr;
	char			**ptr;
	char			*p;
	size_t			i;

	if (!*s)
		return (NULL);
	i = ft_wordcount(s, c);
	p = (char*)s;
	arr = (char **)malloc(sizeof(char *) * (i + 1));
	if (!arr)
		return (NULL);
	ptr = arr;
	return (ft_poparray(ptr, p, c));
}
