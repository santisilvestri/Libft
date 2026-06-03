/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:09:18 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 17:09:51 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <ctype.h>

int g_num_subtests = 6; 

int run_subtest(int index)
{
    if (index == 1) 
        return (!!ft_isascii(0) == !!isascii(0));
    if (index == 2) 
        return (!!ft_isascii(127) == !!isascii(127));
    if (index == 3) 
        return (ft_isascii(128) == 0);
    if (index == 4) 
        return (ft_isascii(-1) == 0);
    if (index == 5)
    {
        for (int c = 0; c <= 127; c++)
        {
            if (!!ft_isascii(c) != !!isascii(c))
                return (0);
        }
        return (1);
    }
    if (index == 6) 
        return (ft_isascii(2147483647) == 0 && ft_isascii(-2147483648) == 0);

    return (0);
}