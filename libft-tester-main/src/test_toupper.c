/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:58:37 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 17:58:51 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <ctype.h>

int g_num_subtests = 4; 

int run_subtest(int index)
{
    if (index == 1)
		return (ft_toupper('a') == toupper('a') && ft_toupper('z') == toupper('z'));
    if (index == 2)
		return (ft_toupper('A') == toupper('A') && ft_toupper('4') == toupper('4'));
    if (index == 3)
		return (ft_toupper('#') == toupper('#') && ft_toupper('\n') == toupper('\n'));
    if (index == 4)
		return (ft_toupper(2147483647) == toupper(2147483647) && ft_toupper(-2147483648) == toupper(-2147483648));
    return (0);
}