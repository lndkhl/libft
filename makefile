# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 14:40:09 by lnkambul          #+#    #+#              #
#    Updated: 2019/05/21 16:49:12 by lnkambul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

test:	main.o basic_ext.o
	gcc -Wall -Werror -Wextra -o main.o basic_ext.o

main.o: main.c basic_ext.h
	gcc -c main.c

basic_ext.o: basic_ext.c basic_ext.h
	gcc -c basic_ext.c 
