/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-zu <mpena-zu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 16:35:26 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/27 12:01:57 by mpena-zu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#include <stddef.h>

extern int g_num_subtests;
extern int run_subtest(int index);

#define GREEN "\033[0;32m"
#define RED   "\033[0;31m"
#define RESET "\033[0m"

int main(void)
{
    int total_errors = 0;

    for (int i = 1; i <= g_num_subtests; i++)
    {
        printf("%d.", i);
        fflush(stdout);

        pid_t pid = fork();
        if (pid == 0)
        {
            int res = run_subtest(i);
            if (res == 1)
                _exit(0);
            else
                _exit(1);
        }
        
        int status;
        waitpid(pid, &status, 0);
        
        if (WIFSIGNALED(status) && (WTERMSIG(status) == SIGSEGV || WTERMSIG(status) == SIGBUS))
        {
            printf("%sCRASH%s ", RED, RESET);
            total_errors++;
        }
        else if (WIFEXITED(status))
        {
            if (WEXITSTATUS(status) == 0)
                printf("%sOK%s ", GREEN, RESET);
            else
            {
                printf("%sKO%s ", RED, RESET);
                total_errors++; 
            }
        }
        fflush(stdout);
    }
    printf("\n");
    return (total_errors);
}