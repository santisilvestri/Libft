/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 19:34:07 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 20:11:13 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// tests_libft/src/test_substr.c
#include "../../libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int g_num_subtests = 9; 

int run_subtest(int index)
{
    char *str = "i love coding in 42";
    size_t giant_len = 10000;
    size_t zero_len = 0;
    unsigned int far_start = 500;

    if (index == 1)
    {
        char *sub = ft_substr(str, 2, 4);	
        int ok = (sub != NULL && strcmp(sub, "love") == 0);
        free(sub);
        return (ok);
    }
    if (index == 2)
    {
        char *sub = ft_substr(str, far_start, 5);
        int ok = (sub != NULL && sub[0] == '\0');
        free(sub);
        return (ok);
    }
    if (index == 3)
    {
        char *sub = ft_substr(str, 17, giant_len);
        int ok = (sub != NULL && strcmp(sub, "42") == 0);
        free(sub);
        return (ok);
    }
    if (index == 4)
    {
        char *sub = ft_substr(str, 5, zero_len);
        int ok = (sub != NULL && sub[0] == '\0');
        free(sub);
        return (ok);
    }
    if (index == 5)
    {
        char *sub = ft_substr(str, 0, 1);
        int ok = (sub != NULL && strcmp(sub, "i") == 0);
        free(sub);
        return (ok);
    }
    if (index == 6)
    {
        char *sub = ft_substr("", 0, 10);
        int ok = (sub != NULL && sub[0] == '\0');
        free(sub);
        return (ok);
    }
    if (index == 7)
    {
        char *sub = ft_substr("42", 0, 2);
        int ok = (sub != NULL && strcmp(sub, "42") == 0);
        free(sub);
        return (ok);
    }
    if (index == 8)
    {
        char *sub = ft_substr("A", 1, 5);
        int ok = (sub != NULL && sub[0] == '\0');
        free(sub);
        return (ok);
    }
    if (index == 9)
		return (ft_substr(NULL, 0, 5) == NULL);
    return (0);
}