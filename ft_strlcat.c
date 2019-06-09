/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 17:47:02 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/09 18:03:28 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;
	int			a;

	i = ft_strlen(dst);
	j = dstsize - i - 1;
	a = 0;
	while (src[j] != '\0' && j > 0)
	{
		dst[i++] = src[a++];
		j--;
	}
	dst[i] = '\0';
	return (ft_strlen(dst));
}
