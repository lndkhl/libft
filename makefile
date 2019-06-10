# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 14:40:09 by lnkambul          #+#    #+#              #
#    Updated: 2019/06/10 14:51:19 by lnkambul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDE = libft.h
CC = gcc
CFLAGS = -Wall -Werror -Wextra
LDFLAGS = -o ${NAME} ${MO} ${LIBPATH} ${LIB}
LIBPATH = -L.
NAME = libft.a
OBJECTS = $(CFILES:.c=.o)
CFILES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_memalloc.c ft_memcpy.c\
		ft_memdel.c ft_memset.c ft_putchar.c ft_putendl.c ft_putstr.c\
		ft_strcat.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c\
		ft_strdup.c ft_strequ.c ft_striter.c ft_strjoin.c ft_strlen.c\
		ft_strmap.c ft_strnew.c ft_strtrim.c ft_tolower.c ft_toupper.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_sr.c ft_memccpy.c\
		ft_memmove.c ft_memchr.c ft_memcmp.c ft_striteri.c ft_strmapi.c\
		ft_strncmp.c ft_strnequ.c ft_strsub.c ft_strchr.c ft_strncpy.c\
		ft_putnbr.c ft_strncat.c ft_strlcat.c ft_putnbr_fd.c ft_strsplit.c
RM = rm -f

all: ${NAME}

${NAME}: ${OBJECTS}
	ar rc ${NAME} ${OBJECTS}

${OBJECTS}:
	${CC} ${CFLAGS} -c ${CFILES} ${INCLUDE}

clean:
	${RM} ${OBJECTS} ${MO}

fclean:
	${RM} ${OBJECTS} ${NAME}

re: $(OBJECTS)
