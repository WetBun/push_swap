# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frgoncal <frgoncal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 01:08:43 by frgoncal          #+#    #+#              #
#    Updated: 2022/06/14 11:28:49 by frgoncal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_isprint.c ft_memchr.c ft_memcmp.c \
ft_memcpy.c ft_memset.c ft_strlcat.c ft_strchr.c \
ft_strdup.c ft_strjoin.c ft_strlcpy.c ft_strlen.c \
ft_strncmp.c ft_strnstr.c ft_substr.c ft_tolower.c ft_toupper.c \
ft_strtrim.c ft_split.c ft_strrchr.c ft_memmove.c ft_itoa.c ft_strmapi.c \
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		ar rc $(NAME) $(OBJ)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all
