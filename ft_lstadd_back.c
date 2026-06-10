/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 11:15:30 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/09 17:11:08 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/* int	main(void)
{
	t_list *list;
	t_list *node1;
	t_list *node2;
	t_list *node3;

	list = NULL;
	node1 = ft_lstnew("Node 1");
	node2 = ft_lstnew("Node 2");
	node3 = ft_lstnew("Node 3");
	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);
	printf("First: 	%s\n", (char *)list->content);
	printf("Second: %s\n", (char *)list->next->content);
	printf("Third: 	%s\n", (char *)list->next->next->content);
	printf("Third next: %p\n", list->next->next->next);
	free(node3);
	free(node2);
	free(node1);
	return (0);
} */