/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboujel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:34:26 by anboujel          #+#    #+#             */
/*   Updated: 2026/10/20 14:34:31 by anboujel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;
	t_list	*temp;

	if (!lst || !del)
		return ;
	cur = *lst;
	while (cur)
	{
		temp = cur->next;
		del(cur->content);
		free(cur);
		cur = temp;
	}
	*lst = NULL;
}
