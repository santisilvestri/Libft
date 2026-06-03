/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 18:52:55 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 18:53:21 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>

int g_num_subtests = 9; 

int run_subtest(int index)
{
    const char *big = "A_Beautiful_Day_in_42_Madrid";
    size_t zero = 0;
    size_t giant = 2147483647;

    if (index == 1)
        return (ft_strnstr(big, "Beautiful", 15) == (big + 2));
    if (index == 2)
        return (ft_strnstr(big, "", 10) == big);
    if (index == 3)
        return (ft_strnstr(big, "", zero) == big);
    if (index == 4)
        return (ft_strnstr(big, "Day", 14) == NULL);
    if (index == 5)
        return (ft_strnstr(big, "Day", 15) == (big + 12));
    if (index == 6)
        return (ft_strnstr(big, "Beautiful", zero) == NULL);
    if (index == 7)
        return (ft_strnstr(big, "Madrid", 10) == NULL);
    if (index == 8)
        return (ft_strnstr(big, "Barcelona", giant) == NULL);
    if (index == 9)
    {
        const char *twins = "parapapapara";
        return (ft_strnstr(twins, "para", 12) == twins);
    }
    return (0);
}