/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:44:24 by lnkambul          #+#    #+#             */
/*   Updated: 2019/05/28 15:22:23 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(const char *s, char (*f)(char *))
{
	int		i;
	char	*s;

	i = (int)ft_strlen(s);
	while (i > 0)
		(*f)(s[i--]);
	return (s);
}
