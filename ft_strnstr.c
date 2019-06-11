/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12:00:08 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/11 13:14:58 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		minsize;
	const char	*cursor;

	minsize = ft_strlen(needle);
	cursor = haystack;
	if (minsize == 0)
		return ((char *)haystack);
	while (*haystack && (cursor + minsize) <= (haystack + len))
	{
		if (*cursor == *needle && \
				ft_strncmp(cursor, needle, minsize) == 0)
			return ((char *)cursor);
		cursor++;
	}
	return (NULL);
}



/*char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	
	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && (i + ft_strlen(needle)) <= (haystack[i] + len))
	{
		if (haystack[i] == needle[0] \
				&& (ft_strncmp(&haystack[i], needle, ft_strlen(needle))) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}*/
//			ft_strdel(&s);
//			s = ft_strsub (haystack, i, ft_strlen(needle));
//				ft_strdel(&s);
//	char			*s;
//	j = 0;
//	unsigned int	j;

