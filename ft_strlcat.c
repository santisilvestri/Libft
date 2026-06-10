/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 11:23:05 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/05 15:23:30 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < size)
		i++;
	j = 0;
	if (i == size)
		return (size + ft_strlen(src));
	while (src[j] && i + j < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/* 
int	main(void)
{
	char dst[20] = "Hello ";
	char src[] = "my name is Santiago";
	size_t ret;

	ret = ft_strlcat(dst, src, 15);
	printf("dst: %s\n", dst);
	printf("return: %zu\n", ret);
	return (0);
} */