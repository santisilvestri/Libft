/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 20:29:58 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 21:17:33 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>
#include <stdlib.h>

int g_num_subtests = 15; 

void free_split_result(char **tab)
{
    int i = 0;
    if (!tab)
        return ;
    while (tab[i])
    {
        free(tab[i]);
        i++;
    }
    free(tab);
}

int run_subtest(int index)
{
    if (index == 1)
    {
        char **res = ft_split("hello world 42", ' ');
        int ok = (res && strcmp(res[0], "hello") == 0 && strcmp(res[1], "world") == 0 && strcmp(res[2], "42") == 0 && res[3] == NULL);
        free_split_result(res);
        return (ok);
    }
    if (index == 2)
    {
        char **res = ft_split("---split---this---now---", '-');
        int ok = (res && strcmp(res[0], "split") == 0 && strcmp(res[1], "this") == 0 && strcmp(res[2], "now") == 0 && res[3] == NULL);
        free_split_result(res);
        return (ok);
    }
    if (index == 3)
    {
        char **res = ft_split("Uncuttable", 'x');
        int ok = (res && strcmp(res[0], "Uncuttable") == 0 && res[1] == NULL);
        free_split_result(res);
        return (ok);
    }
    if (index == 4)
    {
        char **res = ft_split("//////", '/');
        int ok = (res && res[0] == NULL);
        free_split_result(res);
        return (ok);
    }
    if (index == 5)
    {
        char **res = ft_split("", 'A');
        int ok = (res && res[0] == NULL);
        free_split_result(res);
        return (ok);
    }
    if (index == 6)
    {
        char **res = ft_split("Hello World", '\0');
        int ok = (res && strcmp(res[0], "Hello World") == 0 && res[1] == NULL);
        free_split_result(res);
        return (ok);
    }
    if (index == 7)
        return (ft_split(NULL, ' ') == NULL);
    if (index == 8)
    {
        char **res = ft_split("a b c d", ' ');
        int ok = (res && strcmp(res[0], "a") == 0 && strcmp(res[3], "d") == 0 && res[4] == NULL);
        free_split_result(res);
        return (ok);
    }
    if (index == 9)
    {
        char **res = ft_split("Hello\tWorld\n42", ' ');
        int ok = (res && strcmp(res[0], "Hello\tWorld\n42") == 0 && res[1] == NULL);
        free_split_result(res);
        return (ok);
    }
    if (index == 10)
    {
        char **res = ft_split("\xffMadrid\xff", '\xff');
        int ok = (res && strcmp(res[0], "Madrid") == 0 && res[1] == NULL);
        free_split_result(res);
        return (ok);
    }
    if (index == 11)
    {
        char **res = ft_split(" z o m b i e", ' ');
        int ok = (res && strcmp(res[0], "z") == 0 && strcmp(res[5], "e") == 0 && res[6] == NULL);
        free_split_result(res);
        return (ok);
    }
    if (index == 12)
    {
        char **res = ft_split("42Mad##", '#');
        int ok = (res && strcmp(res[0], "42Mad") == 0 && res[1] == NULL);
        free_split_result(res);
        return (ok);
    }
    if (index == 13)
    {
        char **res = ft_split("a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z", ',');
        int ok = (res && strcmp(res[0], "a") == 0 && strcmp(res[25], "z") == 0 && res[26] == NULL);
        free_split_result(res);
        return (ok);
    }
	if (index == 14)
	{
    	char **res = ft_split("   .   .   ", '.');
    	int ok = (res && strcmp(res[0], "   ") == 0 && strcmp(res[1], "   ") == 0 && strcmp(res[2], "   ") == 0 && res[3] == NULL);
    	free_split_result(res);
	    return (ok);
	}
    if (index == 15)
    {
        char **res = ft_split("$", '$');
        int ok = (res && res[0] == NULL);
        free_split_result(res);
        return (ok);
    }
    return (0);
}