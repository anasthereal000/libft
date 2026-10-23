/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboujel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:41:48 by anboujel          #+#    #+#             */
/*   Updated: 2026/10/20 14:41:50 by anboujel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *from, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!to_find[0])
		return ((char *)from);
	while (i < len && from[i])
	{
		j = 0;
		while (i + j < len && from[i + j] && from[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return ((char *)from + i);
		i++;
	}
	return (NULL);
}
