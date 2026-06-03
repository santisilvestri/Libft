/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 19:25:40 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 19:26:49 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int g_num_subtests = 6; 

int run_subtest(int index)
{
    size_t zero = 0;
    size_t ten = 10;
    size_t overflow_count = (SIZE_MAX / 2) + 1;
    size_t overflow_size = 2;

    if (index == 1)
    {
        char *arr = (char *)ft_calloc(100, sizeof(char));
        if (!arr)
            return (0);
        
        int all_zeros = 1;
        for (size_t i = 0; i < 100; i++)
        {
            if (arr[i] != 0)
                all_zeros = 0;
        }
        free(arr);
        return (all_zeros);
    }
    if (index == 2)
    {
        void *ptr = ft_calloc(zero, ten);
        int ok = (ptr != NULL);
        free(ptr);
        return (ok);
    }
    if (index == 3)
    {
        void *ptr = ft_calloc(ten, zero);
        int ok = (ptr != NULL);
        free(ptr);
        return (ok);
    }
    if (index == 4)
    {
        void *ptr = ft_calloc(overflow_count, overflow_size);
        if (ptr == NULL)
            return (1);
        free(ptr);
        return (0);
    }
    if (index == 5)
    {
        void *ptr = ft_calloc(2147483647, 2147483647);
        if (ptr == NULL)
            return (1);
        free(ptr);
        return (0);
    }
    if (index == 6)
    {
        int *arr = (int *)ft_calloc(5, sizeof(int));
        if (!arr)
            return (0);
        arr[0] = 42;
        arr[4] = 42;
        int ok = (arr[0] == 42 && arr[4] == 42 && arr[2] == 0);
        free(arr);
        return (ok);
    }
    return (0);
}