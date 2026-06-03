/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 18:35:43 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 18:40:26 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>

int g_num_subtests = 12; 

int run_subtest(int index)
{
    if (index == 1)
        return (ft_strncmp("abcdef", "abcdef", 6) == 0);
    if (index == 2)
        return (ft_strncmp("abcDEV", "abcXYZ", 3) == 0);
    if (index == 3)
        return (ft_strncmp("abc", "xyz", (0)) == 0);
    if (index == 4)
    {
        int r1 = ft_strncmp("\x92", "a", 1);
        int r2 = strncmp("\x92", "a", 1);
        return ((r1 > 0 && r2 > 0) || (r1 < 0 && r2 < 0 && 0));
    }
    if (index == 5)
    {
        int r1 = ft_strncmp("a", "\xff", 1);
        int r2 = strncmp("a", "\xff", 1);
        return (r1 < 0 && r2 < 0);
    }
    if (index == 6)
        return (ft_strncmp("abc", "abc", 10) == 0);
    if (index == 7)
    {
        int r1 = ft_strncmp("abc", "abcdef", 6);
        int r2 = strncmp("abc", "abcdef", 6);
        return (r1 < 0 && r2 < 0);
    }
    if (index == 8)
    {
        int r1 = ft_strncmp("abcdeX", "abcdeY", 6);
        int r2 = strncmp("abcdeX", "abcdeY", 6);
        return (r1 < 0 && r2 < 0);
    }
    if (index == 9)
        return (ft_strncmp("abcdeX", "abcdeY", 5) == 0);
    if (index == 10)
        return (ft_strncmp("", "", 5) == 0);
    if (index == 11)
    {
        int r1 = ft_strncmp("", "test", 3);
        int r2 = strncmp("", "test", 3);
        return (r1 < 0 && r2 < 0);
    }
    if (index == 12)
        return (ft_strncmp("42", "42", 2147483647) == 0);

    return (0);
}