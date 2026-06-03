/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:58:57 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 17:59:08 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <ctype.h>

int g_num_subtests = 4; 

int run_subtest(int index)
{
    if (index == 1)
		return (ft_tolower('A') == tolower('A') && ft_tolower('Z') == tolower('Z'));
    if (index == 2)
		return (ft_tolower('a') == tolower('a') && ft_tolower('0') == tolower('0'));
    if (index == 3)
		return (ft_tolower('$') == tolower('$') && ft_tolower('\0') == tolower('\0'));
    if (index == 4)
		return (ft_tolower(2147483647) == tolower(2147483647) && ft_tolower(-2147483648) == tolower(-2147483648));
    return (0);
}