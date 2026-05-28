/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 11:23:05 by sasilves          #+#    #+#             */
/*   Updated: 2026/05/27 11:52:28 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size && dst[i])
		i++;
	j = 0;
	while (src[j] && i + j + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	while (src[j])
		j++;
	return (i + j);
}

#include <stdio.h>

int	main(void)
{
	char	dst[20] = "Hello ";
	char	src[] = "My name is Santiago";
	size_t	ret;

	ret = ft_strlcat(dst, src, 20);

	printf("dst: %s\n", dst);
	printf("return: %zu\n", ret);
	return (0);
}