/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgoncal <frgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:06:30 by frgoncal          #+#    #+#             */
/*   Updated: 2021/11/15 12:06:31 by frgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (*str)
	{
		ft_putchar_fd(*str, fd);
		str++;
	}
}
