/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 09:39:18 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/25 09:39:26 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdlib.h>

int g_num_subtests = 3;

int run_subtest(int index)
{
    t_list *list = NULL;
    t_list *n1 = ft_lstnew("first");
    t_list *n2 = ft_lstnew("new_front");

    if (index == 1)
    {
        ft_lstadd_front(&list, n1);
        int ok = (list == n1);
        free(n1); free(n2);
        return (ok);
    }
    if (index == 2)
    {
        ft_lstadd_front(&list, n1);
        ft_lstadd_front(&list, n2);
        int ok = (list == n2 && list->next == n1);
        free(n1); free(n2);
        return (ok);
    }
    if (index == 3)
    {
        ft_lstadd_front(NULL, n1);
        ft_lstadd_front(&list, NULL);
        int ok = (list == NULL);
        free(n1); free(n2);
        return (ok);
    }
    return (0);
}