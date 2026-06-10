/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 11:47:05 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/09 17:44:45 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* static void	del(void *content)
{
	printf("Deleting content: %s\n", (char *)content);
	free(content);
}

int	main(void)
{
	t_list *node;
	char *text;

	text = ft_strdup("Hello");
	node = ft_lstnew(text);

	printf("Before delete: %s\n", (char *)node->content);

	ft_lstdelone(node, del);
	node = NULL;

	printf("Node pointer after delete: %p\n", node);
	return (0);
} */