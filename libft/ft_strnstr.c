/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgoncal <frgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:07:48 by frgoncal          #+#    #+#             */
/*   Updated: 2021/11/15 12:07:48 by frgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haysack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haysack);
	while (haysack[i] != '\0' && i < n)
	{
		j = 0;
		while (haysack[i + j] == needle[j] && needle[j] != '\0'
			&& (i + j) < n)
			j++;
		if (needle[j] == '\0')
			return (((char *)haysack) + i);
		i++;
	}
	return (NULL);
}
