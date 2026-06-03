/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 20:13:38 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 20:15:55 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>
#include <stdlib.h>

int g_num_subtests = 7; 

int run_subtest(int index)
{
    if (index == 1)
    {
        char *res = ft_strjoin("Hello ", "World!");
        int ok = (res != NULL && strcmp(res, "Hello World!") == 0);
        free(res);
        return (ok);
    }
    if (index == 2)
    {
        char *res = ft_strjoin("", "42Madrid");
        int ok = (res != NULL && strcmp(res, "42Madrid") == 0);
        free(res);
        return (ok);
    }
    if (index == 3)
    {
        char *res = ft_strjoin("School", "");
        int ok = (res != NULL && strcmp(res, "School") == 0);
        free(res);
        return (ok);
    }
    if (index == 4)
    {
        char *res = ft_strjoin("", "");
        int ok = (res != NULL && res[0] == '\0');
        free(res);
        return (ok);
    }
    if (index == 5)
    {
        char *res = ft_strjoin(NULL, "Safe");
        return (res == NULL);
    }
    if (index == 6)
    {
        char *res = ft_strjoin("Safe", NULL);
        return (res == NULL);
    }
    if (index == 7)
    {
        char *res = ft_strjoin(NULL, NULL);
        return (res == NULL);
    }

    return (0);
}