/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 20:27:51 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 20:28:47 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>
#include <stdlib.h>

int g_num_subtests = 9; 

int run_subtest(int index)
{
    if (index == 1)
    {
        char *res = ft_strtrim("   xxHello 42xx   ", " x");
        int ok = (res != NULL && strcmp(res, "Hello 42") == 0);
        free(res);
        return (ok);
    }
    if (index == 2)
    {
        char *res = ft_strtrim("abcba", "abc");
        int ok = (res != NULL && res[0] == '\0');
        free(res);
        return (ok);
    }
    if (index == 3)
    {
        char *res = ft_strtrim("Hello", "");
        int ok = (res != NULL && strcmp(res, "Hello") == 0);
        free(res);
        return (ok);
    }
    if (index == 4)
    {
        char *res = ft_strtrim("Madrid", "xyz");
        int ok = (res != NULL && strcmp(res, "Madrid") == 0);
        free(res);
        return (ok);
    }
    if (index == 5)
    {
        char *res = ft_strtrim("", "123");
        int ok = (res != NULL && res[0] == '\0');
        free(res);
        return (ok);
    }
    if (index == 6)
    {
        char *res = ft_strtrim(NULL, "abc");
        return (res == NULL);
    }
    if (index == 7)
    {
        char *res = ft_strtrim("Hello", NULL);
        return (res == NULL);
    }
    if (index == 8)
    {
        char *res = ft_strtrim(NULL, NULL);
        return (res == NULL);
    }
    if (index == 9)
    {
        char *res1 = ft_strtrim("!!!Hello", "!");
        char *res2 = ft_strtrim("Hello!!!", "!");
        int ok = (res1 != NULL && strcmp(res1, "Hello") == 0 &&
                  res2 != NULL && strcmp(res2, "Hello") == 0);
        free(res1);
        free(res2);
        return (ok);
    }

    return (0);
}