/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgoncal <frgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:05:56 by frgoncal          #+#    #+#             */
/*   Updated: 2021/11/15 12:05:57 by frgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*a;
	unsigned char	*b;
	int				i;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (dst < src)
	{
		i = 0;
		while ((size_t)i < len)
		{
			a[i] = b[i];
			i++;
		}
	}
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			a[i] = b[i];
			i--;
		}
	}
	return (dst);
}
