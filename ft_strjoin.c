/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:31:04 by lnkambul          #+#    #+#             */
/*   Updated: 2019/05/29 09:55:44 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	size_t	h;
	size_t	i;
	size_t	j;
	char	*n;

	i = (size_t)ft_strlen(s1);
	i += (size_t)ft_strlen(s2);
	i++;

	n = ft_strnew(i);
	h = (size_t)ft_strlen(s1);
	i = 0;
	while (i < h)
		n[i] = s1[i++];
	j = 0;
	h = (size_t)ft_strlen(s2);
	while (j < h)
		n[++i] = s2[j++];
	return (n);
}
