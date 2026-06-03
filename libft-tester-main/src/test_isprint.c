/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-zu <mpena-zu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 11:30:31 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/27 12:10:40 by mpena-zu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <ctype.h>

int g_num_subtests = 6; 

int run_subtest(int index)
{
    if (index == 1) 
        return (!!ft_isprint(32) == !!isprint(32));
    if (index == 2) 
        return (!!ft_isprint(127) == !!isprint(127));
    if (index == 3) 
        return (ft_isprint(31) == 0);
    if (index == 4) 
        return (ft_isprint(-1) == 0);
    if (index == 5)
    {
        for (int c = 32; c <= 126; c++)
        {
            if (!!ft_isprint(c) != !!isprint(c))
                return (0);
        }
        return (1);
    }
    if (index == 6) 
        return (ft_isprint(2147483647) == 0 && ft_isprint(-2147483648) == 0);
    return (0);
}