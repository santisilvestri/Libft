/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 16:36:35 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 17:49:18 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <ctype.h>

int g_num_subtests = 8; 

int run_subtest(int index)
{
    if (index == 1)
		return (!!ft_isalpha('a') == !!isalpha('a'));
	if (index == 2)
		return (!!ft_isalpha('A') == !!isalpha('A'));
    if (index == 3)
		return (!!ft_isalpha('Z') == !!isalpha('Z'));
    if (index == 4)
		return (!!ft_isalpha('5') == !!isalpha('5'));
    if (index == 5)
		return (!!ft_isalpha(0) == !!isalpha(0));
    if (index == 6)
		return (!!ft_isalpha(127) == !!isalpha(127));
    if (index == 7)
		return (!!ft_isalpha(-42) == !!isalpha(-42));
    if (index == 8)
		return (ft_isalpha(2147483647) == 0); 
    return (0);
}