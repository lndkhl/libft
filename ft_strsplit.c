/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:51:50 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/13 18:52:25 by lnkambul         ###   ########.fr       */
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

	while (*p)
	{
		if (*p != c)
		{
			i = 0;
			while (p[i] != c && p[i] != '\0')
				i++;
			if (!(*ptr++ = ft_strsub(p, 0, i)))
				return (NULL);
			p += i;
		}
		p++;
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

	if (!s)
		return (NULL);
	i = ft_wordcount(s, c);
	p = (char *)s;
	if (!(arr = (char **)malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	ptr = arr;
	if (!(ptr = ft_poparray(ptr, p, c)))
			return (NULL);
	return (arr);
}
