/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstiteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 09:41:35 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/25 09:41:42 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdlib.h>

int g_num_subtests = 3;

static void iter_add_one(void *content)
{
    char *c = (char *)content;
    *c = *c + 1;
}

int run_subtest(int index)
{
    char a = 'A';
    char b = 'B';
    t_list *n1 = ft_lstnew(&a);
    t_list *n2 = ft_lstnew(&b);
    n1->next = n2;

    if (index == 1)
    {
        ft_lstiter(n1, iter_add_one);
        int ok = (a == 'B' && b == 'C');
        free(n1); free(n2);
        return (ok);
    }
    if (index == 2)
    {
        ft_lstiter(NULL, iter_add_one);
        ft_lstiter(n1, NULL);
        free(n1); free(n2);
        return (1);
    }
    if (index == 3)
    {
        ft_lstiter(n1, iter_add_one);
        int ok = (n1->next == n2);
        free(n1); free(n2);
        return (ok);
    }
    return (0);
}