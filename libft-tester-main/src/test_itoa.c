/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 20:31:20 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 20:36:08 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>
#include <stdlib.h>

int g_num_subtests = 12; 

int run_subtest(int index)
{
    if (index == 1)
    {
        char *res = ft_itoa(1542);
        int ok = (res && strcmp(res, "1542") == 0);
        free(res);
        return (ok);
    }
    if (index == 2)
    {
        char *res = ft_itoa(0);
        int ok = (res && strcmp(res, "0") == 0);
        free(res);
        return (ok);
    }
    if (index == 3)
    {
        char *res = ft_itoa(-42);
        int ok = (res && strcmp(res, "-42") == 0);
        free(res);
        return (ok);
    }
    if (index == 4)
    {
        char *res = ft_itoa(2147483647);
        int ok = (res && strcmp(res, "2147483647") == 0);
        free(res);
        return (ok);
    }
    if (index == 5)
    {
        char *res = ft_itoa(-2147483648);
        int ok = (res && strcmp(res, "-2147483648") == 0);
        free(res);
        return (ok);
    }
    if (index == 6)
    {
        char *res = ft_itoa(-100003);
        int ok = (res && strcmp(res, "-100003") == 0);
        free(res);
        return (ok);
    }
    if (index == 7)
    {
        char *res = ft_itoa(1002003);
        int ok = (res && strcmp(res, "1002003") == 0);
        free(res);
        return (ok);
    }
    if (index == 8)
    {
        char *res = ft_itoa(-9);
        int ok = (res && strcmp(res, "-9") == 0);
        free(res);
        return (ok);
    }
    if (index == 9)
    {
        char *res = ft_itoa(-2147483647);
        int ok = (res && strcmp(res, "-2147483647") == 0);
        free(res);
        return (ok);
    }
    if (index == 10)
    {
        char *res = ft_itoa(111111111);
        int ok = (res && strcmp(res, "111111111") == 0);
        free(res);
        return (ok);
    }
    if (index == 11)
    {
        char *res = ft_itoa(-22222222);
        int ok = (res && strcmp(res, "-22222222") == 0);
        free(res);
        return (ok);
    }
    if (index == 12)
    {
        char *res = ft_itoa(10);
        int ok = (res && strcmp(res, "10") == 0);
        free(res);
        return (ok);
    }
    return (0);
}