/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:55:13 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 19:24:13 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>

size_t real_strlcpy_behavior(char *dst, const char *src, size_t siz)
{
    size_t src_len = strlen(src);
    if (siz == 0)
        return (src_len);
    size_t copy_len = (src_len >= siz) ? siz - 1 : src_len;
    memcpy(dst, src, copy_len);
    dst[copy_len] = '\0';
    return (src_len);
}

int g_num_subtests = 8; 

int run_subtest(int index)
{
    size_t zero = 0;
    size_t small = 1;
    size_t mid = 5;

    if (index == 1)
    {
        char dst1[20] = "-------------------";
        char dst2[20] = "-------------------";
        size_t r1 = ft_strlcpy(dst1, "Hello", 20);
        size_t r2 = real_strlcpy_behavior(dst2, "Hello", 20);
        return (r1 == r2 && memcmp(dst1, dst2, 20) == 0);
    }
    if (index == 2)
    {
        char dst1[6] = "------";
        char dst2[6] = "------";
        size_t r1 = ft_strlcpy(dst1, "LongString", mid);
        size_t r2 = real_strlcpy_behavior(dst2, "LongString", mid);
        return (r1 == r2 && memcmp(dst1, dst2, 6) == 0);
    }
    if (index == 3)
    {
        char dst1[10] = "Unchanged";
        char dst2[10] = "Unchanged";
        size_t r1 = ft_strlcpy(dst1, "Fresh", zero);
        size_t r2 = real_strlcpy_behavior(dst2, "Fresh", zero);
        return (r1 == r2 && memcmp(dst1, dst2, 10) == 0);
    }
    if (index == 4)
    {
        char dst1[5] = "----";
        char dst2[5] = "----";
        size_t r1 = ft_strlcpy(dst1, "42", small);
        size_t r2 = real_strlcpy_behavior(dst2, "42", small);
        return (r1 == r2 && memcmp(dst1, dst2, 5) == 0);
    }
    if (index == 5)
    {
        char dst1[10] = "---------";
        char dst2[10] = "---------";
        size_t r1 = ft_strlcpy(dst1, "", 10);
        size_t r2 = real_strlcpy_behavior(dst2, "", 10);
        return (r1 == r2 && memcmp(dst1, dst2, 10) == 0);
    }
    if (index == 6)
    {
        char dst1[5] = "----";
        char dst2[5] = "----";
        size_t r1 = ft_strlcpy(dst1, "abc", 4);
        size_t r2 = real_strlcpy_behavior(dst2, "abc", 4);
        return (r1 == r2 && memcmp(dst1, dst2, 5) == 0);
    }
    if (index == 7)
    {
        char dst1[10] = "---------";
        char dst2[10] = "---------";
        size_t r1 = ft_strlcpy(dst1, "abc\xff\x82", 10);
        size_t r2 = real_strlcpy_behavior(dst2, "abc\xff\x82", 10);
        return (r1 == r2 && memcmp(dst1, dst2, 10) == 0);
    }
    if (index == 8)
    {
        char dst1[20] = "-------------------";
        char dst2[20] = "-------------------";
        size_t r1 = ft_strlcpy(dst1, "Madrid", 2147483647);
        size_t r2 = real_strlcpy_behavior(dst2, "Madrid", 2147483647);
        return (r1 == r2 && memcmp(dst1, dst2, 20) == 0);
    }

    return (0);
}