/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboujel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:38:31 by anboujel          #+#    #+#             */
/*   Updated: 2026/10/20 21:22:24 by anboujel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, char c)
{
	int	f;
	int	count_word;
	int	i;

	count_word = 0;
	i = 0;
	f = 0;
	while (s[i])
	{
		if (s[i] == c)
			f = 0;
		else if (f == 0)
		{
			f = 1;
			count_word++;
		}
		i++;
	}
	return (count_word);
}

char	*ft_create_word(char const *str, char c)
{
	char	*dest;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	dest = (char *)malloc(sizeof(char) * i + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**save_me_from_leaks(char **words, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(words[i]);
		i++;
	}
	free(words);
	return (NULL);
}

char	**ft_split(char const *str, char sep)
{
	char	**dest;
	int		i;

	if (!str)
		return (NULL);
	i = 0;
	dest = (char **)malloc(sizeof(char *) * (count_word(str, sep) + 1));
	if (!dest)
		return (NULL);
	while (*str)
	{
		while (*str && *str == sep)
			str++;
		if (*str && *str != sep)
		{
			dest[i] = ft_create_word(str, sep);
			i++;
			if (!dest[i - 1])
				return (save_me_from_leaks(dest, i));
			while (*str && *str != sep)
				str++;
		}
	}
	dest[i] = NULL;
	return (dest);
}
