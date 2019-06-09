/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:51:50 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/09 18:54:30 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				**ft_strsplit(const char *s, char c)
{
	char			**arr;
	unsigned int	w;

	while (*s)
	{
		if (*s == c)
		{
			w++;
			while (*s == c)
				*s++;
		}
		*s++;
	}
	arr = (char **)malloc(sizeof(char *) * w);
	while (
			
