/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:04:31 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 17:07:45 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <ctype.h>

int g_num_subtests = 6; 

int run_subtest(int index)
{
    if (index == 1) 
        return (!!ft_isdigit('5') == !!isdigit('5'));
    if (index == 2) 
        return (!!ft_isdigit('0') == !!isdigit('0') && !!ft_isdigit('9') == !!isdigit('9'));
    if (index == 3) 
        return (!!ft_isdigit('/') == !!isdigit('/') && !!ft_isdigit(':') == !!isdigit(':'));
    if (index == 4) 
        return (!!ft_isdigit('a') == !!isdigit('a') && !!ft_isdigit('Z') == !!isdigit('Z'));
    if (index == 5)
    {
        for (int c = 0; c <= 127; c++)
        {
            if (!!ft_isdigit(c) != !!isdigit(c))
                return (0);
        }
        return (1);
    }
    if (index == 6) 
        return (ft_isdigit(2147483647) == 0 && ft_isdigit(-2147483648) == 0);
    return (0);
}