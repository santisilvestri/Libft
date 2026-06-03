/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 09:40:22 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/25 09:40:31 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdlib.h>

int g_num_subtests = 3;

int run_subtest(int index)
{
    t_list *list = NULL;
    t_list *n1 = ft_lstnew("1");
    t_list *n2 = ft_lstnew("2");

    if (index == 1)
    {
        ft_lstadd_back(&list, n1);
        int ok = (list == n1);
        free(n1); free(n2);
        return (ok);
    }
    if (index == 2)
    {
        ft_lstadd_back(&list, n1);
        ft_lstadd_back(&list, n2);
        int ok = (list == n1 && n1->next == n2);
        free(n1); free(n2);
        return (ok);
    }
    if (index == 3)
    {
        ft_lstadd_back(NULL, n1);
        ft_lstadd_back(&list, NULL);
        int ok = (list == NULL);
        free(n1); free(n2);
        return (ok);
    }
    return (0);
}