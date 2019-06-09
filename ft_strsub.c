/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 14:59:18 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/09 13:17:25 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*n;
	char		*p;

	n = ft_strnew(len);
	if (!n || !s)
		return (NULL);
	p = n;
	while (len > 0 && s[start] != '\0')
	{
		*n++ = s[start++];
		len--;
	}
	return (p);
}
