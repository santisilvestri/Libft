/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:11:09 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 17:11:24 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>

int g_num_subtests = 5; 

int run_subtest(int index)
{
    if (index == 1)
        return (ft_strlen("Hello, 42!") == strlen("Hello, 42!"));
    if (index == 2)
        return (ft_strlen("") == strlen(""));
    if (index == 3)
        return (ft_strlen("A\n\t B\0C") == strlen("A\n\t B\0C")); 
    if (index == 4)
        return (ft_strlen("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed do eiusmod tempor incididunt ut labore.") == strlen("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed do eiusmod tempor incididunt ut labore."));

    if (index == 5)
    {
        size_t len = ft_strlen("test");
        return (len == 4);
    }

    return (0);
}