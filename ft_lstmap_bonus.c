/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiestas <cfiestas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:18:22 by cfiestas          #+#    #+#             */
/*   Updated: 2023/02/10 16:53:02 by cfiestas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static void	*ft_lstfree(t_list *newlist, void *content, void (*del)(void *))
{
	del(content);
	ft_lstclear(&newlist, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*content;
	t_list	*newnode;

	if (!lst || !f || !del)
		return (0);
	newlist = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			return (ft_lstfree(newlist, content, del));
		newnode = ft_lstnew(content);
		if (!newnode)
			return (ft_lstfree(newlist, content, del));
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}
