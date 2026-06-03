/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 21:25:46 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 21:37:57 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int g_num_subtests = 2; 

static int verify_content(const char *file, const char *expected, size_t len)
{
    int fd = open(file, O_RDONLY);
    if (fd < 0) return (0);
    char *buf = malloc(len + 5);
    if (!buf) { close(fd); return (0); }
    ssize_t r = read(fd, buf, len + 5);
    close(fd);
    int ok = (r == (ssize_t)len && memcmp(buf, expected, len) == 0);
    free(buf);    
    unlink(file);
    return (ok);
}

int run_subtest(int index)
{
    const char *tmp = "sandbox_putchar.txt";
    int fd = open(tmp, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0) return (0);

    if (index == 1)
    {
        ft_putchar_fd('A', fd);
        close(fd);
        return (verify_content(tmp, "A", 1));
    }
    if (index == 2)
    {
        ft_putchar_fd('\0', fd);
        close(fd);
        return (verify_content(tmp, "\0", 1));
    }
    close(fd);
    return (0);
}