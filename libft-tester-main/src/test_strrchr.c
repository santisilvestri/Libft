/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 18:03:33 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 18:30:04 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>

int g_num_subtests = 5; 

int run_subtest(int index)
{
    const char *str = "bonjourno";

    if (index == 1)
        return (ft_strrchr(str, 'o') == strrchr(str, 'o'));
    if (index == 2)
        return (ft_strrchr(str, 'z') == NULL);
    if (index == 3)
        return (ft_strrchr(str, '\0') == strrchr(str, '\0'));
    if (index == 4)
        return (ft_strrchr(str, 'b') == strrchr(str, 'b'));
    if (index == 5)
        return (ft_strrchr(str, 1024 + 'n') == strrchr(str, 1024 + 'n'));

    return (0);
}