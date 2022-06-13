/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgoncal <frgoncal@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:53:31 by frgoncal          #+#    #+#             */
/*   Updated: 2022/06/13 18:21:28 by frgoncal         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	t_stacks	stack;
	int i;
	int size;

	if (argc > 1)
	{
		i = 1;
		size = ps_strlen(argv);
		stack.a = malloc(size * sizeof(int));
		if (!stack.a)
			return (0);
		stack.a_size = size;
		stack.b = malloc(size * sizeof(int));
		if (!stack.b)
		{
			free(stack.a);
			return (0);
		}
		stack.b_size = 0;
		while (i < argc)
		{
			stack.a[i] = ft_atoi(argv[i]);
			printf("%d\n", stack.a[i]);
			i++;
		}
		free(stack.a);
		free(stack.b);
	}
	return (0);
}
