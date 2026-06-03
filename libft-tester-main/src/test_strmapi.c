/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 20:36:42 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 20:37:15 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>
#include <stdlib.h>

int g_num_subtests = 8;

char mapi_uppercase_even(unsigned int i, char c)
{
    if (i % 2 == 0 && c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

char mapi_shift_index(unsigned int i, char c)
{
    return (c + i);
}

int run_subtest(int index)
{
    if (index == 1)
    {
        char *res = ft_strmapi("abcde", mapi_uppercase_even);
        int ok = (res && strcmp(res, "AbCdE") == 0);
        free(res);
        return (ok);
    }
    if (index == 2)
    {
        char *res = ft_strmapi("aaaa", mapi_shift_index);
        int ok = (res && strcmp(res, "abcd") == 0);
        free(res);
        return (ok);
    }
    if (index == 3)
    {
        char *res = ft_strmapi("", mapi_uppercase_even);
        int ok = (res && res[0] == '\0');
        free(res);
        return (ok);
    }
    if (index == 4)
        return (ft_strmapi(NULL, mapi_uppercase_even) == NULL);
    if (index == 5)
        return (ft_strmapi("test", NULL) == NULL);
    if (index == 6)
        return (ft_strmapi(NULL, NULL) == NULL);
    if (index == 7)
    {
        char orig[] = "hello";
        char *res = ft_strmapi(orig, mapi_uppercase_even);
        int ok = (res && res != orig && orig[0] == 'h');
        free(res);
        return (ok);
    }
    if (index == 8)
    {
        char *res = ft_strmapi("zzzzzz", mapi_uppercase_even);
        int ok = (res && strcmp(res, "ZzZzZz") == 0);
        free(res);
        return (ok);
    }
    return (0);
}