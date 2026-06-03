/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:14:08 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 17:17:51 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>

int g_num_subtests = 5; 

int run_subtest(int index)
{
    if (index == 1)
    {
        char buffer1[20] = "Hello World";
        char buffer2[20] = "Hello World";
        
        ft_memset(buffer1, 'A', 5);
        memset(buffer2, 'A', 5);
        return (memcmp(buffer1, buffer2, 20) == 0);
    }
    if (index == 2)
    {
        char buffer[10] = "AAAAA";
        void *ret_ft = ft_memset(buffer, 'B', 3);
        
        return (ret_ft == buffer);
    }
    if (index == 3)
    {
        char buffer1[10] = "BBBBB";
        char buffer2[10] = "BBBBB";
        
        ft_memset(buffer1, 257, 3);
        memset(buffer2, 257, 3);
        return (memcmp(buffer1, buffer2, 10) == 0);
    }
    if (index == 4)
    {
        char buffer1[10] = "Hello";
        char buffer2[10] = "Hello";
        
        ft_memset(buffer1, 'Z', (0));
        memset(buffer2, 'Z', (0));
        return (memcmp(buffer1, buffer2, 10) == 0);
    }
    if (index == 5)
    {
        int array1[5] = {1, 2, 3, 4, 5};
        int array2[5] = {1, 2, 3, 4, 5};
        ft_memset(array1, 0, 4);
        memset(array2, 0, 4);
        return (memcmp(array1, array2, sizeof(array1)) == 0);
    }

    return (0);
}