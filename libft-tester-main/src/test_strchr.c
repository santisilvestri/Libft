/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:59:21 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 18:01:28 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>

int g_num_subtests = 5; 

int run_subtest(int index)
{
    const char *str = "42 Madrid ";

	if (index == 1)
        return (ft_strchr(str, 'd') == strchr(str, 'd'));
    if (index == 2)
        return (ft_strchr(str, 'z') == NULL);
    if (index == 3)
        return (ft_strchr(str, '\0') == strchr(str, '\0'));
    if (index == 4)
        return (ft_strchr(str, '4') == str);
    if (index == 5)
        return (ft_strchr(str, 1024 + 'p') == strchr(str, 1024 + 'p'));

    return (0);
}