/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:39:40 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/06 16:53:08 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int		i;
	int		l;
	char	a;
	char	*r;

	i = 0;
	l = ft_strlen(s);
	a = char(c);
	r = NULL;
	if (a == '\0')
		return (s[l]);
	while (s[i] != '\0' && s[i] != a)
		i++;
	
	return

