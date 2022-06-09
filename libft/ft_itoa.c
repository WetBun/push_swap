/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgoncal <frgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:05:25 by frgoncal          #+#    #+#             */
/*   Updated: 2021/11/17 13:09:21 by frgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int			i;

	i = 0;
	while (n / 10)
	{
		++i;
		n = n / 10;
	}
	++i;
	return (i);
}

static int	negative_numbers(int num)
{
	if (num < 0)
	{
		num = num * -1;
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	int			sign;
	long int	num;

	num = n;
	sign = negative_numbers(num);
	if (sign)
		num = num * -1;
	i = count_digits(num) + sign;
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (0);
	str[i] = 0;
	while (num >= 10)
	{
		str[--i] = (num % 10) + '0';
		num = num / 10;
	}
	str[--i] = num + '0';
	if (sign > 0)
		str[0] = '-';
	return (str);
}
