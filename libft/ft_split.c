/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgoncal <frgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:06:38 by frgoncal          #+#    #+#             */
/*   Updated: 2021/11/15 12:26:22 by frgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contar(char const *s, char c)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t			nbwords;
	char			*ptr;
	char			**str;

	nbwords = ft_contar((char *)s, c);
	ptr = (char *)s;
	str = (char **)malloc(sizeof(char *) * (nbwords + 1));
	if (s == 0)
		return (NULL);
	if (!str)
		return (NULL);
	while (*s)
	{
		if (*s == c)
		{
			if (ptr != s)
				*(str++) = ft_substr(ptr, 0, s - ptr);
			ptr = (char *)s + 1;
		}
		s++;
	}
	if (ptr != s)
		*(str++) = ft_substr(ptr, 0, s - ptr);
	*str = 0;
	return (str - nbwords);
}
