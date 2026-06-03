/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 19:28:22 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 19:33:36 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>
#include <stdlib.h>

int g_num_subtests = 6; 

int run_subtest(int index)
{
    if (index == 1)
    {
        char *orig = "42Madrid";
        char *copy = ft_strdup(orig);
        int ok = (copy != NULL && copy != orig && strcmp(orig, copy) == 0);
        free(copy);
        return (ok);
    }
    if (index == 2)
    {
        char *copy = ft_strdup("");
        int ok = (copy != NULL && copy[0] == '\0');
        free(copy);
        return (ok);
    }
    if (index == 3)
    {
        char *orig = "C";
        char *copy = ft_strdup(orig);
        if (!copy)
            return (0);
            
        int ok = (copy[0] == 'C' && copy[1] == '\0');
        free(copy);
        return (ok);
    }
    if (index == 4)
    {
        char *orig = "Line1\n\tLine2  ";
        char *copy = ft_strdup(orig);
        int ok = (copy != NULL && strcmp(orig, copy) == 0);
        free(copy);
        return (ok);
    }
    if (index == 5)
    {
        char long_str[2000];
        memset(long_str, 'A', 1999);
        long_str[1999] = '\0';     
        char *copy = ft_strdup(long_str);
        int ok = (copy != NULL && strcmp(long_str, copy) == 0);
        free(copy);
        return (ok);
    }
    if (index == 6)
    {
        char *orig = "\xff\x82\x12\x09";
        char *copy = ft_strdup(orig);
        int ok = (copy != NULL && memcmp(orig, copy, 5) == 0);
        free(copy);
        return (ok);
    }
    return (0);
}
