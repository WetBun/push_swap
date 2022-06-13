# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frgoncal <frgoncal@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 17:45:22 by frgoncal          #+#    #+#              #
#    Updated: 2022/06/13 18:37:03 by frgoncal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = libft

SRC = push_swap.c

OBj = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ) push_swap.h
		make -C $(LIBFT)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

%.o : %.c
		  gcc -c -o $@ $<
clean :
		make -C $(LIBFT) clean
		rm -rf *.o

fclean : clean
		make -C $(LIBFT) fclean
		rm -rf $(NAME)

re : fclean all