/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 11:55:16 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/09 12:01:13 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strncpy(char *dst, const char *src, size_t len)
{
	while (len > 0)
	{
		*dst++ = *src++;
		len--;
	}
	while (len > 0 && dst)
	{
		*dst++ = '\0';
		len--;
	}
	return (dst);
}
