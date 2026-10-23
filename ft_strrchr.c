/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboujel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:42:09 by anboujel          #+#    #+#             */
/*   Updated: 2026/10/20 14:42:15 by anboujel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	rev;

	rev = ft_strlen(s);
	while (rev >= 0)
	{
		if (s[rev] == (unsigned char)c)
			return ((char *)&s[rev]);
		rev--;
	}
	return (NULL);
}
