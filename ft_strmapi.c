/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:05:26 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/08 15:20:24 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*t;

	if (!s || !f)
		return (NULL);
	i = 0;
	t = ft_strdup(s);
	if (!t)
		return (NULL);
	while (t[i] != '\0')
	{
		f((i),(t[i]));
		i++;
	}
	return (t);
}
