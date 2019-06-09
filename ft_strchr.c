/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:39:40 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/09 11:54:23 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int		i;
	char	n;
	char	*p;

	p = (char *)ft_strdup(s);
	i = 0;
	n = (char)c;
	if (n == '\0')
		return (&(p[ft_strlen(p)]));
	while (p[i] != '\0' && p[i] != n)
		i++;
	if (p[i] == '\0')
		return (NULL);
	return (&p[i]);
}
