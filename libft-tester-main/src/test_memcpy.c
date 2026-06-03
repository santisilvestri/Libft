/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:19:25 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 17:19:36 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// tests_libft/src/test_memcpy.c
#include "../../libft.h"
#include <string.h>

int g_num_subtests = 4; 

int run_subtest(int index)
{
    if (index == 1)
    {
        char src[] = "Copy this!";
        char dst1[20] = {0};
        char dst2[20] = {0};
        
        ft_memcpy(dst1, src, 10);
        memcpy(dst2, src, 10);
        return (memcmp(dst1, dst2, 20) == 0);
    }
    if (index == 2)
    {
        char src[] = "abc";
        char dst[10] = {0};
        void *ret = ft_memcpy(dst, src, 3);
        
        return (ret == dst);
    }
    if (index == 3)
    {
        char src[] = "Don't copy";
        char dst1[10] = "Safe";
        char dst2[10] = "Safe";
        
        ft_memcpy(dst1, src, (0));
        memcpy(dst2, src, (0));
        return (memcmp(dst1, dst2, 10) == 0);
    }
    if (index == 4)
    {
        int src_arr[5] = {100, 200, 300, 400, 500};
        int dst_arr1[5] = {0};
        int dst_arr2[5] = {0};
        
        ft_memcpy(dst_arr1, src_arr, sizeof(src_arr));
        memcpy(dst_arr2, src_arr, sizeof(src_arr));
        return (memcmp(dst_arr1, dst_arr2, sizeof(src_arr)) == 0);
    }

    return (0);
}