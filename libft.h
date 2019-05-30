/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 10:03:39 by lnkambul          #+#    #+#             */
/*   Updated: 2019/05/30 11:52:55 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_atoi(const char *s);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	*memalloc(size_t s);
void	ft_memdel(void **p);

void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar(char c);
void	ft_putendl(const char *s);
void	ft_putstr(const char *s);
char	*ft_strcat(char s1, char s2);
void	ft_strclr(chari *s);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *d, const char *s);
void	ft_strdel(char **s);

char	*ft_strdup(char *s);
int		ft_strequ(const char *s1, const char *s2);
void	ft_striter(char *s, void (*f)(char *));
char	*ft_strjoin(const cahr *s1, const char s2);
size_t	ft_strlen(const char *s);
char	*ft_strmap(const char *s, char (*f)(char *));
char	*ft_strnew(size_t size);
char	**ft_strsplit(const char *s, char c);
char	*ft_strtrim(const char *s);
int		ft_tolower(int c);

int		ft_toupper(int c);

#endif
