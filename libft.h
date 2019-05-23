/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:50:53 by lnkambul          #+#    #+#             */
/*   Updated: 2019/05/23 13:15:50 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include "string.h"

void		ft_putchar(char c);
void		ft_putstr(const char *s);
size_t		ft_strlen(const char *s);
void		ft_putendl(const char *s);
int			ft_toupper(int i);
int			ft_tolower(int i);
char		*ft_strcpy(char *dst, const char *src);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
int			ft_atoi(const char *s);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);

#endif
