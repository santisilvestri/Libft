/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:17:50 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/25 10:18:23 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdlib.h>
#include <string.h>

int g_num_subtests = 4;
static void *mock_map_f(void *content)
{
    char *str;
    char *new_str;
    int i;

    if (!content)
        return (NULL);
    str = (char *)content;
    new_str = malloc(strlen(str) + 1);
    if (!new_str)
        return (NULL);
    i = 0;
    while (str[i])
    {
        new_str[i] = str[i] + 1;
        i++;
    }
    new_str[i] = '\0';
    return (new_str);
}

static void mock_map_del(void *content)
{
    free(content);
}

int run_subtest(int index)
{
    t_list *list = NULL;
    t_list *new_list = NULL;
    t_list *n1 = ft_lstnew(strdup("1"));
    t_list *n2 = ft_lstnew(strdup("2"));

    if (index == 1)
    {
        t_list *check1 = ft_lstmap(NULL, mock_map_f, mock_map_del);
        t_list *check2 = ft_lstmap(n1, NULL, mock_map_del);
        t_list *check3 = ft_lstmap(n1, mock_map_f, NULL);
        
        int ok = (check1 == NULL && check2 == NULL && check3 == NULL);
        
        ft_lstclear(&n1, mock_map_del);
        free(n2->content); free(n2);
        return (ok);
    }
    if (index == 2)
    {
        ft_lstadd_back(&list, n1);
        new_list = ft_lstmap(list, mock_map_f, mock_map_del);
        
        int ok = (new_list != NULL && strcmp(new_list->content, "2") == 0 && new_list->next == NULL);
        
        ft_lstclear(&list, mock_map_del);
        ft_lstclear(&new_list, mock_map_del);
        free(n2->content); free(n2);
        return (ok);
    }
    if (index == 3)
    {
        ft_lstadd_back(&list, n1);
        ft_lstadd_back(&list, n2);
        new_list = ft_lstmap(list, mock_map_f, mock_map_del);
        
        int ok = (new_list != NULL 
                  && strcmp(new_list->content, "2") == 0 
                  && strcmp(new_list->next->content, "3") == 0 
                  && new_list->next->next == NULL);
        
        ft_lstclear(&list, mock_map_del);
        ft_lstclear(&new_list, mock_map_del);
        return (ok);
    }
        if (index == 4)
    {
        ft_lstadd_back(&list, n1);
        ft_lstadd_back(&list, n2);
        new_list = ft_lstmap(list, mock_map_f, mock_map_del);
        
        int ok = (strcmp(list->content, "1") == 0 && strcmp(list->next->content, "2") == 0);
        
        ft_lstclear(&list, mock_map_del);
        ft_lstclear(&new_list, mock_map_del);
        return (ok);
    }
    
    return (0);
}