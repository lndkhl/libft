# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 14:40:09 by lnkambul          #+#    #+#              #
#    Updated: 2019/05/23 11:20:59 by lnkambul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

libft.a:	
	gcc -Wall -Werror -Wextra -c ft_*.c libft.h
	ar rc libft.a *.o

main:
	gcc -Wall -Werror -Wextra -c main.c -L. -lft

clean:
	rm -f *.o *.h.gch
