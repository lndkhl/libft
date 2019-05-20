/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_put.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:49:39 by lnkambul          #+#    #+#             */
/*   Updated: 2019/05/20 13:26:54 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char const *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i > 0)
		ft_putchar(s[i--]);
}

char*	ft_itoa(int	n)
{

}

void	ft_putnbr(int	n)
{

}

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
