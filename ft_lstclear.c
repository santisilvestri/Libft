/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 11:47:21 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/09 17:52:16 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

/* static void	del(void *content)
{
	printf("Deleting: %s\n", (char *)content);
	free(content);
}

int	main(void)
{
	t_list *list;
	t_list *node1;
	t_list *node2;
	t_list *node3;

	list = NULL;
	node1 = ft_lstnew(ft_strdup("Node 1"));
	node2 = ft_lstnew(ft_strdup("Node 2"));
	node3 = ft_lstnew(ft_strdup("Node 3"));

	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);

	printf("Before clear:\n");
	printf("First: %s\n", (char *)list->content);
	printf("Second: %s\n", (char *)list->next->content);
	printf("Third: %s\n", (char *)list->next->next->content);

	ft_lstclear(&list, del);

	printf("After clear: %p\n", list);
	return (0);
} */