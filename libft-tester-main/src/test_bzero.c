/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:18:56 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 17:19:12 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>

int g_num_subtests = 4; 

int run_subtest(int index)
{
    if (index == 1)
    {
        char buffer1[20] = "Hello World";
        char buffer2[20] = "Hello World";
        
        ft_bzero(buffer1, 5);
        bzero(buffer2, 5);
        return (memcmp(buffer1, buffer2, 20) == 0);
    }
    if (index == 2)
    {
        char buffer1[10] = "Keep Me";
        char buffer2[10] = "Keep Me";
        
        ft_bzero(buffer1, (0));
        bzero(buffer2, (0));
        return (memcmp(buffer1, buffer2, 10) == 0);
    }
    if (index == 3)
    {
        int array1[4] = {42, 42, 42, 42};
        int array2[4] = {42, 42, 42, 42};
        
        ft_bzero(array1, sizeof(array1));
        bzero(array2, sizeof(array2));
        return (memcmp(array1, array2, sizeof(array1)) == 0);
    }
    if (index == 4)
    {
        int array1[3] = {10, 20, 30};
        int array2[3] = {10, 20, 30};
                ft_bzero(array1, 4);
        bzero(array2, 4);
        return (memcmp(array1, array2, sizeof(array1)) == 0);
    }

    return (0);
}