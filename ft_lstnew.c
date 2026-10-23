/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboujel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:35:47 by anboujel          #+#    #+#             */
/*   Updated: 2026/10/22 21:40:22 by anboujel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodl;

	nodl = malloc(sizeof(t_list));
	if (nodl == NULL)
		return (NULL);
	nodl->content = content;
	nodl->next = NULL;
	return (nodl);
}
