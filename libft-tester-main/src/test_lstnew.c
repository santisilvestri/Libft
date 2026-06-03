/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 09:38:44 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/25 09:38:53 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>
#include <stdlib.h>

int g_num_subtests = 3;

int run_subtest(int index)
{
    char *content = "42Madrid";
    t_list *node = ft_lstnew(content);

    if (index == 1)
    {
        int ok = (node != NULL);
        free(node);
        return (ok);
    }
    if (index == 2)
    {
        int ok = (node && node->content == content);
        free(node);
        return (ok);
    }
    if (index == 3)
    {
        int ok = (node && node->next == NULL);
        free(node);
        return (ok);
    }
    return (0);
}