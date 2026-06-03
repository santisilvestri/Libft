/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:07:56 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 19:00:29 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <ctype.h>

int g_num_subtests = 7; 

int run_subtest(int index)
{
    if (index == 1) 
        return (!!ft_isalnum('0') == !!isalnum('0') && !!ft_isalnum('5') == !!isalnum('5') && !!ft_isalnum('9') == !!isalnum('9'));
    if (index == 2) 
        return (!!ft_isalnum('A') == !!isalnum('A') && !!ft_isalnum('M') == !!isalnum('M') && !!ft_isalnum('Z') == !!isalnum('Z'));
    if (index == 3) 
        return (!!ft_isalnum('a') == !!isalnum('a') && !!ft_isalnum('m') == !!isalnum('m') && !!ft_isalnum('z') == !!isalnum('z'));
    if (index == 4) 
        return (!!ft_isalnum(':') == !!isalnum(':') && 
                !!ft_isalnum('@') == !!isalnum('@') && 
                !!ft_isalnum('[') == !!isalnum('[') && 
                !!ft_isalnum('`') == !!isalnum('`'));

    if (index == 5) 
        return (!!ft_isalnum(' ') == !!isalnum(' ') && !!ft_isalnum('\n') == !!isalnum('\n') && !!ft_isalnum('\t') == !!isalnum('\t'));
    if (index == 6)
    {
        for (int c = 0; c <= 127; c++)
        {
            if (!!ft_isalnum(c) != !!isalnum(c))
                return (0);
        }
        return (1);
    }
    if (index == 7) 
        return (ft_isalnum(2147483647) == 0 && ft_isalnum(-2147483648) == 0);
    return (0);
}