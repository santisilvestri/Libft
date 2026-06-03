/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 19:00:11 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 19:00:51 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdlib.h>

int g_num_subtests = 10; 

int run_subtest(int index)
{
    if (index == 1)
        return (ft_atoi("42") == atoi("42"));
    if (index == 2)
        return (ft_atoi("-12345") == atoi("-12345"));
    if (index == 3)
        return (ft_atoi(" \t\n\v\f\r-42") == atoi(" \t\n\v\f\r-42"));
    if (index == 4)
        return (ft_atoi("+777") == atoi("+777"));
    if (index == 5)
        return (ft_atoi("+-42") == 0 && ft_atoi("--42") == 0 && ft_atoi("-+42") == 0);
    if (index == 6)
        return (ft_atoi("123a456") == atoi("123a456"));
    if (index == 7)
        return (ft_atoi("NoNumbersHere42") == 0);
    if (index == 8)
        return (ft_atoi("42 43") == atoi("42 43"));
    if (index == 9)
        return (ft_atoi("2147483647") == 2147483647);
    if (index == 10)
        return (ft_atoi("-2147483648") == -2147483648);

    return (0);
}