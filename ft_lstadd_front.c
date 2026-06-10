/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 10:12:40 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/09 16:38:58 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* int	main(void)
{
	t_list *list;
	t_list *node1;
	t_list *node2;

	list = NULL;
	node1 = ft_lstnew("Second node");
	node2 = ft_lstnew("First node");
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	printf("First content: %s\n", (char *)list->content);
	printf("Second content: %s\n", (char *)list->next->content);
	printf("Second next: %p\n", list->next->next);
	free(node2);
	free(node1);
	return (0);
} */