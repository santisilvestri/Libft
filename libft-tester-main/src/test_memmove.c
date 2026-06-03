/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:19:52 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 17:20:14 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>

int g_num_subtests = 5; 

int run_subtest(int index)
{
    if (index == 1)
    {
        char src[] = "HelloWorld";
        char dst1[15] = {0};
        char dst2[15] = {0};
        
        ft_memmove(dst1, src, 10);
        memmove(dst2, src, 10);
        return (memcmp(dst1, dst2, 15) == 0);
    }
    if (index == 2)
    {
        char buffer1[10] = "ABCDE";
        char buffer2[10] = "ABCDE";
        
        ft_memmove(buffer1 + 2, buffer1, 3);
        memmove(buffer2 + 2, buffer2, 3);
        return (memcmp(buffer1, buffer2, 10) == 0);
    }

    if (index == 3)
    {
        char buffer1[10] = "ABCDE";
        char buffer2[10] = "ABCDE";
        
        ft_memmove(buffer1, buffer1 + 2, 3);
        memmove(buffer2, buffer2 + 2, 3);
        return (memcmp(buffer1, buffer2, 10) == 0);
    }
    if (index == 4)
    {
        char src[] = "xyz";
        char dst[10] = {0};
        void *ret = ft_memmove(dst, src, 3);
        
        return (ret == dst);
    }
    if (index == 5)
    {
        char buffer1[10] = "Static";
        char buffer2[10] = "Static";
        
        ft_memmove(buffer1, buffer1 + 2, (0));
        memmove(buffer2, buffer2 + 2, (0));
        return (memcmp(buffer1, buffer2, 10) == 0);
    }

    return (0);
}