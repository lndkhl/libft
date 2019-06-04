/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:46:25 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/04 17:11:11 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *s1, const char * s2)
{
	int		i;
	int		j;
	char	*s3;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	j += i;
	s3 = (char *)malloc((sizeof(char) * (j + 1)));
	if (!s3)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		s3[i++] = s2[j++];
	s1 = s3;
	s1[j] = '\0';
	return (s1);
}
