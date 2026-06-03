/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 18:50:29 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 18:51:38 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>

int g_num_subtests = 10; 

int run_subtest(int index)
{
    size_t zero = 0;

    #define SIGN(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

    if (index == 1)
        return (ft_memcmp("abcdef", "abcdef", 6) == 0);
    if (index == 2)
        return (ft_memcmp("abcdeX", "abcdeY", 5) == 0);
    if (index == 3)
        return (ft_memcmp("abc", "xyz", zero) == 0);
    if (index == 4)
    {
        int r1 = ft_memcmp("abc\0X", "abc\0Y", 5);
        int r2 = memcmp("abc\0X", "abc\0Y", 5);
        return (SIGN(r1) == SIGN(r2));
    }
    if (index == 5)
    {
        int r1 = ft_memcmp("\xff", "\x00", 1);
        int r2 = memcmp("\xff", "\x00", 1);
        return (r1 > 0 && r2 > 0);
    }
    if (index == 6)
    {
        int r1 = ft_memcmp("\x02", "\xfe", 1);
        int r2 = memcmp("\x02", "\xfe", 1);
        return (r1 < 0 && r2 < 0);
    }
    if (index == 7)
    {
        int r1 = ft_memcmp("abcdef", "abcdeZ", 6);
        int r2 = memcmp("abcdef", "abcdeZ", 6);
        return (SIGN(r1) == SIGN(r2));
    }
    if (index == 8)
    {
        int a[2] = {42, 100};
        int b[2] = {42, 200};
        int r1 = ft_memcmp(a, b, sizeof(int) * 2);
        int r2 = memcmp(a, b, sizeof(int) * 2);
        return (SIGN(r1) == SIGN(r2));
    }
    if (index == 9)
        return (ft_memcmp("abc", "abcdefgh", 3) == 0);
    if (index == 10)
        return (ft_memcmp("", "", 1) == 0);

    return (0);
}