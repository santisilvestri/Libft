/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:58:06 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 19:25:28 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>

size_t real_strlcat_behavior(char *dst, const char *src, size_t siz)
{
    size_t dst_len = strlen(dst);
    size_t src_len = strlen(src);
    if (siz <= dst_len)
        return (siz + src_len);
    size_t available = siz - dst_len - 1;
    size_t to_copy = (src_len > available) ? available : src_len;
    memcpy(dst + dst_len, src, to_copy);
    dst[dst_len + to_copy] = '\0';
    return (dst_len + src_len);
}

int g_num_subtests = 9;

int run_subtest(int index)
{
    size_t zero = 0;
    size_t small = 3;
    size_t exact = 6;

    if (index == 1)
    {
        char dst1[30] = "Hello ";
        char dst2[30] = "Hello ";
        size_t r1 = ft_strlcat(dst1, "World!", 30);
        size_t r2 = real_strlcat_behavior(dst2, "World!", 30);
        return (r1 == r2 && strcmp(dst1, dst2) == 0);
    }
    if (index == 2)
    {
        char dst1[10] = "Init ";
        char dst2[10] = "Init ";
        size_t r1 = ft_strlcat(dst1, "VeryLongString", 10);
        size_t r2 = real_strlcat_behavior(dst2, "VeryLongString", 10);
        return (r1 == r2 && strcmp(dst1, dst2) == 0);
    }
    if (index == 3)
    {
        char dst1[20] = "Testing";
        char dst2[20] = "Testing";
        size_t r1 = ft_strlcat(dst1, "Appended", small);
        size_t r2 = real_strlcat_behavior(dst2, "Appended", small);
        return (r1 == r2 && strcmp(dst1, dst2) == 0);
    }
    if (index == 4)
    {
        char dst1[20] = "Normal";
        char dst2[20] = "Normal";
        size_t r1 = ft_strlcat(dst1, "Add", exact);
        size_t r2 = real_strlcat_behavior(dst2, "Add", exact);
        return (r1 == r2 && strcmp(dst1, dst2) == 0);
    }
    if (index == 5)
    {
        char dst1[20] = "NoChange";
        char dst2[20] = "NoChange";
        size_t r1 = ft_strlcat(dst1, "Valid", zero);
        size_t r2 = real_strlcat_behavior(dst2, "Valid", zero);
        return (r1 == r2 && strcmp(dst1, dst2) == 0);
    }
    if (index == 6)
    {
        char dst1[20] = "Fresh";
        char dst2[20] = "Fresh";
        size_t r1 = ft_strlcat(dst1, "", 20);
        size_t r2 = real_strlcat_behavior(dst2, "", 20);
        return (r1 == r2 && strcmp(dst1, dst2) == 0);
    }
    if (index == 7)
    {
        char dst1[10] = "";
        char dst2[10] = "";
        size_t r1 = ft_strlcat(dst1, "", 5);
        size_t r2 = real_strlcat_behavior(dst2, "", 5);
        return (r1 == r2 && strcmp(dst1, dst2) == 0);
    }
    if (index == 8)
    {
        char dst1[10] = "AAAA";
        char dst2[10] = "AAAA";
        size_t r1 = ft_strlcat(dst1, "BBBB", 5);
        size_t r2 = real_strlcat_behavior(dst2, "BBBB", 5);
        return (r1 == r2 && strcmp(dst1, dst2) == 0);
    }
    if (index == 9)
    {
        char dst1[50] = "42";
        char dst2[50] = "42";
        size_t r1 = ft_strlcat(dst1, "Madrid", 2147483647);
        size_t r2 = real_strlcat_behavior(dst2, "Madrid", 2147483647);
        return (r1 == r2 && strcmp(dst1, dst2) == 0);
    }

    return (0);
}