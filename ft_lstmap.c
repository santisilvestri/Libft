/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 11:47:56 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/09 18:08:54 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/* static void	del(void *content)
{
	free(content);
}

static void	*to_upper_copy(void *content)
{
	char	*str;
	char	*copy;
	int		i;

	str = (char *)content;
	copy = ft_strdup(str);
	if (!copy)
		return (NULL);
	i = 0;
	while (copy[i])
	{
		copy[i] = ft_toupper(copy[i]);
		i++;
	}
	return (copy);
}

int	main(void)
{
	t_list *list;
	t_list *mapped;

	list = NULL;
	ft_lstadd_back(&list, ft_lstnew("hello"));
	ft_lstadd_back(&list, ft_lstnew("world"));
	ft_lstadd_back(&list, ft_lstnew("libft"));

	mapped = ft_lstmap(list, to_upper_copy, del);

	printf("Mapped list:\n");
	printf("%s\n", (char *)mapped->content);
	printf("%s\n", (char *)mapped->next->content);
	printf("%s\n", (char *)mapped->next->next->content);

	ft_lstclear(&mapped, del);

	free(list->next->next);
	free(list->next);
	free(list);
	return (0);
} */