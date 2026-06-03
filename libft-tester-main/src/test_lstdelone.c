/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 09:40:42 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/25 09:40:52 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdlib.h>
#include <string.h>

int g_num_subtests = 3;
static int g_del_called = 0;

static void fake_del(void *content)
{
    free(content);
    g_del_called = 1;
}

int run_subtest(int index)
{
    g_del_called = 0;
    char *str = strdup("to_delete");
    t_list *node = ft_lstnew(str);

    if (index == 1)
    {
        ft_lstdelone(node, fake_del);
        return (g_del_called == 1);
    }
    if (index == 2)
    {
        ft_lstdelone(NULL, fake_del);
        ft_lstdelone(node, NULL);
        free(str); free(node);
        return (1);
    }
    if (index == 3)
    {
        free(str); free(node);
        return (g_del_called == 0);
    }
    return (0);
}