/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 10:03:39 by lnkambul          #+#    #+#             */
/*   Updated: 2019/05/25 11:41:33 by lnkambul         ###   ########.fr       */
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
void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar(char c);
void	ft_putendl(const char *s);

void	ft_putstr(const char *s);
char	*ft_strcpy(char *dst, const char *src);
size_t	ft_strlen(const char *s);

int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
