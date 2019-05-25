/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 10:03:39 by lnkambul          #+#    #+#             */
/*   Updated: 2019/05/25 10:48:35 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

int		ft_atoi(const char *s);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(char c);

char	ft_isalpha(char c);
char	ft_isascii(char c);
char	ft_isdigit(char c);

char	ft_isprint(char c);
char	*ft_itoa(int n);
void	*ft_memcpy(void *dst, const *src, size_t n);

void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar(char c);
void	*ft_putendl(const char *s);

void	*ft_putstr(const char *s);
char	*ft_strcpy(char *dst, const char *src, size_t len);
size_t	*ft_strlen(const char *s);

char	ft_tolower(char c);
char	ft_toupper(char c);
