/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboujel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:33:37 by anboujel          #+#    #+#             */
/*   Updated: 2026/10/22 21:06:56 by anboujel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_degits(long nbr)
{
	int	count;

	count = 0;
	if (nbr <= 0)
	{
		nbr = -nbr;
		count = 1;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		length;
	long	nbr;

	nbr = n;
	length = count_degits(nbr);
	res = malloc((length + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[length] = '\0';
	if (nb == 0)
		return (ft_strdup("0"));
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		res[--length] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (res);
}
