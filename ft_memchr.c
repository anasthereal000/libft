/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboujel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:36:23 by anboujel          #+#    #+#             */
/*   Updated: 2026/10/21 21:49:23 by anboujel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*ptr_s;

	i = 0;
	ptr_s = (const char *)s;
	while (i < n)
	{
		if (ptr_s[i] == c)
		{
			return ((void *)&ptr_s[i]);
		}
		i++;
	}
	return (NULL);
}
