/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgoncal <frgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:29:57 by frgoncal          #+#    #+#             */
/*   Updated: 2022/06/14 12:30:00 by frgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_strlen(char **argv)
{
	int	i;

	i = 0;
	while (*argv)
	{
		argv++;
		i++;
	}
	return (i);
}

void	push_swap(char **argv)
{
	t_stacks	stack;
	int			i;
	int			size;

	i = 1;
	size = ps_strlen(argv);
	stack.a = malloc(size * sizeof(int));
	if (!stack.a)
		return ;
	stack.a_size = size;
	stack.b = malloc(size * sizeof(int));
	if (!stack.b)
	{
		free(stack.a);
		return ;
	}
	stack.b_size = 0;
	while (i < size)
	{
		stack.a[i] = ft_atoi(argv[i]);
		printf("%d\n", stack.a[i]);
		i++;
	}
	free(stack.a);
	free(stack.b);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		push_swap(argv);
		return (0);
	}
	return (0);
}
