/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 11:55:16 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/10 17:59:51 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strncpy(char *dst, const char *src, size_t len)
{
	char		*p1;

	p1 = dst;
	while (len > 0 && *src)
	{
		*dst++ = *src++;
		len--;
	}
	if (*src == '\0' && len > 0)
	{
		while (*dst)
			*dst++ = '\0';
	}
	return (p1);
}
