/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 20:37:23 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 20:38:56 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>

int g_num_subtests = 11; 

void iteri_uppercase_even(unsigned int i, char *c)
{
    if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
        *c -= 32;
}

void iteri_nullify(unsigned int i, char *c)
{
    (void)i;
    *c = 'X';
}

void iteri_add_one(unsigned int i, char *c)
{
    (void)i;
    *c = *c + 1;
}

void iteri_encrypt_complex(unsigned int i, char *c)
{
    if (i % 3 == 0)
        *c = *c + 1;
    else if (i % 3 == 1)
        *c = *c - 1;
}

int run_subtest(int index)
{
    if (index == 1)
    {
        char str[] = "abcdef";
        ft_striteri(str, iteri_uppercase_even);
        return (strcmp(str, "AbCdEf") == 0);
    }
    if (index == 2)
    {
        char str[] = "1234";
        ft_striteri(str, iteri_nullify);
        return (strcmp(str, "XXXX") == 0);
    }
    if (index == 3)
    {
        char str[] = "";
        ft_striteri(str, iteri_uppercase_even);
        return (str[0] == '\0');
    }
    if (index == 4)
    {
        ft_striteri(NULL, iteri_uppercase_even);
        return (1);
    }
    if (index == 5)
    {
        char str[] = "test";
        ft_striteri(str, NULL);
        return (strcmp(str, "test") == 0);
    }
    if (index == 6)
    {
        ft_striteri(NULL, NULL);
        return (1);
    }
    if (index == 7)
    {
        char str[3] = {'a', 'b', '\0'};
        ft_striteri(str, iteri_nullify);
        return (str[0] == 'X' && str[1] == 'X' && str[2] == '\0');
    }
    if (index == 8)
    {
        char str[] = "z";
        ft_striteri(str, iteri_uppercase_even);
        return (strcmp(str, "Z") == 0);
    }
    if (index == 9)
    {
        char str[501];
        memset(str, 'A', 500);
        str[500] = '\0';        
        ft_striteri(str, iteri_add_one);        
        int all_b = 1;
        for (int i = 0; i < 500; i++)
        {
            if (str[i] != 'B')
                all_b = 0;
        }
        return (all_b && str[500] == '\0');
    }
    if (index == 10)
    {
        char str[] = "abcdef"; 
        ft_striteri(str, iteri_encrypt_complex);
        return (strcmp(str, "bacedf") == 0);
    }
    if (index == 11)
    {
        char str[] = "\x01\x02\x03";
        ft_striteri(str, iteri_add_one);
        return (str[0] == '\x02' && str[1] == '\x03' && str[2] == '\x04');
    }

    return (0);
}