/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboujel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:42:29 by anboujel          #+#    #+#             */
/*   Updated: 2026/10/20 14:42:31 by anboujel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	remove_dup(const char *str, char c)
{
	while (*str)
		if (c == *str++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		last;
	int		beg;
	char	*res;

	if (!s1)
		return (NULL);
	beg = 0;
	last = ft_strlen(s1);
	i = 0;
	while (beg < last && remove_dup(set, s1[beg]))
		beg++;
	while (last > beg && remove_dup(set, s1[last - 1]))
		last--;
	res = malloc(sizeof(char) * (last - beg + 1));
	if (!res)
		return (NULL);
	while (i < last - beg)
	{
		res[i] = s1[beg + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
