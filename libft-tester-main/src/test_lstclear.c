/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 09:41:09 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/25 09:41:20 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdlib.h>
#include <string.h>

int g_num_subtests = 3;
static int g_cleared_count = 0;

static void fake_del(void *content)
{
    free(content);
    g_cleared_count++;
}

int run_subtest(int index)
{
    g_cleared_count = 0;
    t_list *list = NULL;
    ft_lstadd_back(&list, ft_lstnew(strdup("A")));
    ft_lstadd_back(&list, ft_lstnew(strdup("B")));

    if (index == 1)
    {
        ft_lstclear(&list, fake_del);
        return (g_cleared_count == 2);
    }
    if (index == 2)
    {
        ft_lstclear(&list, fake_del);
        return (list == NULL);
    }
    if (index == 3)
    {
        ft_lstclear(NULL, fake_del);
        ft_lstclear(&list, NULL);
        ft_lstclear(&list, fake_del);
        return (1);
    }
    return (0);
}